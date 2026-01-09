#include<iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    double balance; 

public:
    // Constructor to initialize
    void deposite(double amount) {
        if (amount > 0) {
            balance = balance + amount;
            cout << "Deposited: " << amount<<endl << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance = balance - amount;
            cout << "Withdrew: " << amount<<endl << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    double getbalance() {
        return balance;
    }

};

int main(){
    BankAccount account;
    account.deposite(500);
    account.withdraw(200);
    cout << "Current Balance: " << account.getbalance() << endl;

    return 0;
}