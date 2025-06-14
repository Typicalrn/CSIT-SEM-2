#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Determine and display the larger number
    if (num1 > num2) {
        cout << num1 << " is larger than " << num2 << "." << endl;
    } else if (num2 > num1) {
        cout << num2 << " is larger than " << num1 << "." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    // Check and display even/odd status of each number
    if (num1 % 2 == 0) {
        cout << num1 << " is even." << endl;
    } else {
        cout << num1 << " is odd." << endl;
    }

    if (num2 % 2 == 0) {
        cout << num2 << " is even." << endl;
    } else {
        cout << num2 << " is odd." << endl;
    }

    return 0;
}
