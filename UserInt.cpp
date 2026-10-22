
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string input;
    int n;

    while (true) {
        cout << "Enter an integer between 5 and 10: ";

        // Step 1: Read the entire line as a string
        getline(cin, input);

        // Step 2: Create a stream from that string
        stringstream ss(input);

        // Step 3: A variable for detecting extra characters
        char extra;

        // Step 4: Reject failed conversions or extra characters
        if (!(ss >> n) || (ss >> extra)) {
            cout << "Invalid input! Enter a whole integer."
                 << endl;
            continue;
        }

        // Step 5: Check the permitted range
        if (n >= 5 && n <= 10) {
            break;
        }

        cout << "Number out of range! Try again." << endl;
    }

    cout << "Accepted: " << n << endl;

    return 0;
}
