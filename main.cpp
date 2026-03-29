#include <iostream>
#include "functions.h"

using namespace std;

int main() {
    int choice;
    int num;

    do {
        
        cout << "\n==============================\n";
        cout << "             MENU             \n";
        cout << "==============================\n";
        cout << "1. Find Sum of Squares\n";
        cout << "2. Find Factorial\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        
        if (choice == 1) {
            cout << "Enter a number: ";
            cin >> num;
            if (num < 0) {
                cout << "Please enter a positive integer.\n";
            } else {
                cout << "Sum of squares: " << sumOfSquares(num) << "\n";
            }
        } 
        else if (choice == 2) {
            cout << "Enter a number: ";
            cin >> num;
            if (num < 0) {
                cout << "Factorial is not defined for negative numbers.\n";
            } else {
                cout << "Factorial of the number is " << findFactorial(num) << "\n";
            }
        } 
        else if (choice == 3) {
            cout << "Exiting the program. Goodbye!\n";
        } 
        else {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        }

    } while (choice != 3);

    return 0;
}