#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    int choice;
    char again;

    do {
        // Input two numbers
        cout << "\nEnter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        // Display which number is greater or smaller
        if (num1 > num2) {
            cout << num1 << " is greater than " << num2 << "." << endl;
        } else if (num2 > num1) {
            cout << num2 << " is greater than " << num1 << "." << endl;
        } else {
            cout << "Both numbers are equal." << endl;
        }

        // Display operation menu
        cout << "\nSelect operation:\n";
        cout << "1. Addition (+)\n";
        cout << "2. Subtraction (-)\n";
        cout << "3. Multiplication (*)\n";
        cout << "4. Division (/)\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        // Perform selected operation
        switch (choice) {
            case 1:
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Error: Division by zero is not allowed." << endl;
                } else {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                }
                break;
            default:
                cout << "Invalid choice. Please select from 1 to 4." << endl;
        }

        // Ask user if they want to do another calculation
        cout << "\nDo you want to perform another operation? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "Calculator exited. Goodbye!" << endl;
    return 0;
}
