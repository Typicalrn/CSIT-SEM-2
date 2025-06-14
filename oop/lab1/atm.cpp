#include <iostream>
using namespace std;

int main() {
    double balance, amount;
    int choice;

    // Get initial balance
    cout << "Enter your account balance: ";
    cin >> balance;

    if (balance < 0) {
        cout << "Initial balance cannot be negative.\n";
        return 1;
    }

    // Menu
    cout << "\nSelect an operation:\n";
    cout << "1. Withdraw money\n";
    cout << "2. Deposit money\n";
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > balance) {
                cout << "Withdrawal failed: Insufficient balance.\n";
            } else if (amount < 0) {
                cout << "Invalid amount: Cannot withdraw negative money.\n";
            } else {
                balance -= amount;
                cout << "Withdrawal successful.\n";
                cout << "Balance: " << balance << endl;
            }
            break;

        case 2:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount < 0) {
                cout << "Invalid amount: Cannot deposit\n";
            } else {
                balance += amount;
                cout << "Deposit successful.\n";
                cout << "New balance: " << balance << endl;
            }
            break;

        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
