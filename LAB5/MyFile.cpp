#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

//function declaration
void NumberOfVowels(string filedata);
void NumberOfWords(string filedata);
void Reverse(string filedata);
void CapitalizeSecondLetter(string filedata);

int main() {
    ofstream output;
    output.open(R"(C:\School\COM211  C++ Computer Programming\myfile.txt)");

    if(output.fail()){
        cout << "Fie does not exist";
    }

    output << "This is the Advanced Computer Programming Module";
    output.close();

    ifstream input;
    input.open(R"(C:\School\COM211  C++ Computer Programming\myfile.txt)");

    string fileData;
    getline(input, fileData);
    input.close();
    
    //calling functions
    NumberOfVowels(fileData);
    NumberOfWords(fileData);
    Reverse(fileData);
    CapitalizeSecondLetter(fileData);

    return 0;
}


//functions definition
void NumberOfVowels(string filedata){
    int n;
    for(int i = 0; i < filedata.length(); i++){
        if((tolower(filedata[i])) == 'a' || (tolower(filedata[i])) == 'e' || (tolower(filedata[i])) == 'i' || (tolower(filedata[i])) == 'o' || (tolower(filedata[i])) == 'u'){
            n++;
        }
    }

    cout << "The number of Vowels in the file is: " << n << endl;
}

void NumberOfWords(string filedata){
    int Nwords = 0;
    stringstream ss(filedata);
    string word;

    while(ss >> word){
        Nwords++;
    }

    cout << "The number of words in the file is: " << Nwords << endl;
}

void Reverse(string filedata){
    stringstream ss(filedata);
    vector<string> words;
    string word;

    while(ss >> word){
        words.push_back(word);
    }

    for(int i = words.size() - 1; i >= 0; i--){
        cout << words[i] << " ";
    }
     cout << endl;
}

void CapitalizeSecondLetter(string filedata) {
    string word = "";
    int position = 0;

    for (int i = 0; i < filedata.length(); i++) {
        if (filedata[i] == ' ') {
            word += ' ';
            position = 0;
        }
        else {
            position++;

            if (position == 2) {
                word += toupper(filedata[i]);
            }
            else {
                word += tolower(filedata[i]);
            }
        }
    }

    cout << word << endl;
}