#include <iostream>
using namespace std;

// Function to add 10 to the number (pass by value)
void addTen(int num) {
    num = num + 10;
    cout << "Inside function, num = " << num << endl;
}

int main() {
    int number = 20;

    cout << "Before function call, number = " << number << endl;

    // Call function with pass by value
    addTen(number);

    cout << "After function call, number = " << number << endl;

    return 0;
}
