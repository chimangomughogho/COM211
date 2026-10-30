#include <iostream>
using namespace std;

int main() {
    //declare a pointer and initialize it
    //so that it doesn't store a random address

    int *pPointer = nullptr;
    int integerValue = 5;

    //assign pointer to address of object
    pPointer = &integerValue;

    //output the value of integer
    cout << "inegerValue: " << integerValue << endl;

    //output the address of integerValue
    cout <<"Address of inegerValue: " << &integerValue <<  endl;

    //output the address assigned to pPointer
    cout << "pPointer: " << pPointer <<  endl;

    //output the address of a pPointer
    cout <<"Adress of pPOinter: " << &pPointer <<  endl;

    return 0;
}