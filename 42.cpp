#include <iostream>
#include <climits>
using namespace std;

void displayMenu() {
    cout << "\nBanking System Menu:\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Balance Inquiry\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
}

int main() {
    double balance = 0.0;
    int choice;
    double amount;

    while (true) {
        displayMenu();
        cin >> choice;

        if (cin.fail() || choice < 1 || choice > 4) {
            cin.clear();
            cin.ignore(INT_MAX, '\n'); 
            cout << "Invalid input. Please enter a number between 1 and 4." << endl;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited: " << amount << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                }
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Amount withdrawn: " << amount << endl;
                } else if (amount > balance) {
                    cout << "Insufficient balance. Transaction denied." << endl;
                } else {
                    cout << "Invalid amount. Please enter a positive value." << endl;
                }
                break;
            case 3:
                cout << "Current balance: " << balance << endl;
                break;
            case 4:
                cout << "Exiting the banking system. Goodbye!" << endl;
                return 0;
        }
    }

    return 0;
}
