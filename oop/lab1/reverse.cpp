#include <iostream>
using namespace std;

int main() {
    int number, reversed = 0;

    cout << "Enter a number: ";
    cin >> number;

    int original = number; // Store original number for display

    while (number != 0) {
        int digit = number % 10;          // Get last digit
        reversed = reversed * 10 + digit; // Append digit to reversed number
        number = number / 10;             // Remove last digit
    }

    cout << "Reversed number of " << original << " is: " << reversed << endl;

    return 0;
}
