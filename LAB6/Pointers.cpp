#include <iostream>
using namespace std;

int main() {
    int firstValue;
    int secondValue;

    int *pPointer = nullptr;

    //assign pointer with the address of the firstValue
    pPointer = &firstValue;
    *pPointer = 10; //indirection

    //assign pointer with the address of the secondValue
    pPointer = &secondValue;
    *pPointer = 20; //indirection

    cout << "firstValue is " << firstValue << endl;
    cout << "secondValue is " << secondValue <<  endl;


    return 0;
}