#include <iostream>
using namespace std;
int main() {
    int choice;
    double balance = 1000, amount;

    while (true) {
        cout << "\n--- Banking Menu ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Amount Deposited.\n";
            } else {
                cout << "Invalid amount.\n";
            }
        }
        else if (choice == 2) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Amount Withdrawn.\n";
            } else {
                cout << "Insufficient balance or invalid amount.\n";
            }
        }
        else if (choice == 3) {
            cout << "Current Balance: " << balance << endl;
        }
        else if (choice == 4) {
            cout << "Program Terminated.\n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}