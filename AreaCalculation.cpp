#include <iostream>
using namespace std;
double Square(double a);
double Rectangle(double a, double b);
double Triangle(double a, double b);


int main() {

    int n;
    while(true){
        cout << "please select the area of the shape to calculate" << endl;
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit program\n\n";
        cout << "Enter selection: ";
        cin >> n;
        cout << "\n";

        if(!(n >= 1 && n <= 4)){
            cout << "Your input was: " << n << " which is an invalid input\nPlease enter a valid input!!!\n\n"; 
            cin.clear();
            cin.ignore(1000, '\n');
            continue;
        }


        if(n == 1){

            while(true){  
                double a;
                cout << "Enter a single number to calculate the area of a square with: ";
                cin >> a;
                cout << "\n";

                if(!(cin >> a)){
                    cout << "Enter a valid input!\n";
                    cin.clear();
                    cin.ignore(1000, '\n');
                    continue;
                }

            double result = Square(a);
            cout << "The area of the Square is: " << result << "\n\n";
            break;
            }


        } else if(n == 2){
                double a, b;
                cout << "Enter two numbers (l = length and w = width) to calculate the area of a Rectangle with: ";
                cin >> a >> b;
                double result = Rectangle(a, b);
                cout << "The area of the Rectangle is: " << result << "\n\n";
        }else if(n == 3){
                double a, b;
                cout << "Enter two numbers (b = base and h = height) to calculate the area of a Triangle with: ";
                cin >> a >> b;
                double result = Triangle(a, b);
                cout << "The area of the Triangle is: " << result << "\n\n";
        }else if(n == 4){
                break;
        }

    }

    return 0;
}



double Square(double a){
    return (a * a);
}
double Rectangle(double a, double b){
    return (a * b);
}
double Triangle(double a, double b){
    return (0.5 * a * b);
}
