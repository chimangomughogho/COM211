#include <iostream>
using namespace std;

int main() {
    
    int numbersArray[5];
    int *pPointer = nullptr;

    //assign the address of the first element to the pointer
    pPointer = numbersArray;

    *pPointer = 10; //assign the value to the first element

    /*
    increment the pointer using pointer arithmetic to assign the address of the second 
    element to the pointer
    */
    pPointer++;
    *pPointer =  20;

    //assign the address of the third element to a pointer
    pPointer = &numbersArray[2];
    *pPointer = 30; 

    /*
    assihgn the address of the fourth element to the pointer using pointer arithmetic
    
    */

    pPointer = numbersArray + 3;
    *pPointer = 40;

    //assign the address of the first element to a pointer
    pPointer = numbersArray;

    /*
    assign a value to the fifth element using indirection and a pointer arithmetic
    */

    return 0;
}