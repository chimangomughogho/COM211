
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {

     cout << "Enter an integer between 5 and 10" << endl;
    string input;
    int n;

    while (true) {
        getline(cin, input);
        stringstream ss(input);
        char extra;

        //Reject failed conversions or extra characters
        if (!(ss >> n) || (ss >> extra)) {
            cout << "sorry, you entered an invalid number, try again" << endl;
            continue;
        }

        //Check the permitted range
        if (n >= 5 && n <= 10) {
            break;
        }

        cout << "you entered(" << n << "). please enter a number between 5 and 10" << endl;
    }

    cout << "Accepted: " << n << endl;

    return 0;
}
