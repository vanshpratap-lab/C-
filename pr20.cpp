#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    // Encapsulation: sensitive data hidden from outside access
    string accountHolder;
    long accountNumber;
    string pin;
    double balance;

    // Internal helper function (abstraction: user doesn't need to know how this works)
    bool authenticate(string enteredPin) {
        return enteredPin == pin;
    }

public:
    // Constructor to initialize account details
    ATM(string name, long accNo, string accPin, double initialBalance) {
        accountHolder = name;
        accountNumber = accNo;
        pin = accPin;
        balance = initialBalance;
    }

    // Public interface: user interacts only through these methods
    void checkBalance(string enteredPin) {
        if (authenticate(enteredPin)) {
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Available Balance: " << balance << endl;
        } else {
            cout << "Incorrect PIN. Access denied." << endl;
        }
    }

    void deposit(string enteredPin, double amount) {
        if (authenticate(enteredPin)) {
            if (amount > 0) {
                balance += amount;
                cout << "Amount deposited successfully. New Balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        } else {
            cout << "Incorrect PIN. Access denied." << endl;
        }
    }

    void withdraw(string enteredPin, double amount) {
        if (authenticate(enteredPin)) {
            if (amount <= 0) {
                cout << "Invalid withdrawal amount." << endl;
            } else if (amount > balance) {
                cout << "Insufficient balance." << endl;
            } else {
                balance -= amount;
                cout << "Amount withdrawn successfully. New Balance: " << balance << endl;
            }
        } else {
            cout << "Incorrect PIN. Access denied." << endl;
        }
    }

    void changePin(string oldPin, string newPin) {
        if (authenticate(oldPin)) {
            pin = newPin;
            cout << "PIN changed successfully." << endl;
        } else {
            cout << "Incorrect old PIN. PIN not changed." << endl;
        }
    }
};

int main() {
    // Creating an ATM object (abstraction: user just uses methods, not internal logic)
    ATM myAccount("John Doe", 123456789, "1234", 5000.0);

    int choice;
    string pin;
    double amount;

    do {
        cout << "\n----- ATM MENU -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter PIN: ";
                cin >> pin;
                myAccount.checkBalance(pin);
                break;
            case 2:
                cout << "Enter PIN: ";
                cin >> pin;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                myAccount.deposit(pin, amount);
                break;
            case 3:
                cout << "Enter PIN: ";
                cin >> pin;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                myAccount.withdraw(pin, amount);
                break;
            case 4: {
                string oldPin, newPin;
                cout << "Enter old PIN: ";
                cin >> oldPin;
                cout << "Enter new PIN: ";
                cin >> newPin;
                myAccount.changePin(oldPin, newPin);
                break;
            }
            case 5:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 5);

    return 0;
}