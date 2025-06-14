#include <iostream>
using namespace std;

// Function to calculate area of a square
int area(int side) {
    return side * side;
}

// Function to calculate area of a rectangle
int area(int length, int width) {
    return length * width;
}

int main() {
    int choice;
    int side, length, width;

    cout << "Area Calculator\n";
    cout << "1. Area of Square\n";
    cout << "2. Area of Rectangle\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter side of the square: ";
            cin >> side;
            cout << "Area of square: " << area(side) << endl;
            break;

        case 2:
            cout << "Enter length of the rectangle: ";
            cin >> length;
            cout << "Enter width of the rectangle: ";
            cin >> width;
            cout << "Area of rectangle: " << area(length, width) << endl;
            break;

        default:
            cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
