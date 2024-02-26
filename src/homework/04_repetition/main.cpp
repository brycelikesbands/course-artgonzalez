//write include statements

//write using statements
#include <iostream>
#include "dna.h"

using namespace std;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() {
    int choice;
    bool exit = false;

    do {
        cout << "Menu:" << endl;
        cout << "1-Factorial" << endl;
        cout << "2-Greatest Common Divisor" << endl;
        cout << "3-Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int num;
                cout << "Enter a number to find its factorial: ";
                cin >> num;
                cout << "Factorial of " << num << " is " << factorial(num) << endl;
                break;
            }
            case 2: {
                int num1, num2;
                cout << "Enter two numbers to find their Greatest Common Divisor: ";
                cin >> num1 >> num2;
                cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
                break;
            }
            case 3: {
                char confirm;
                cout << "Are you sure you want to exit? (y/n): ";
                cin >> confirm;
                if (confirm == 'y' || confirm == 'Y') {
                    exit = true;
                }
                break;
            }
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (!exit);

    return 0;
}