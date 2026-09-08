#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    float balance;

public:
    BankAccount(int acc, float bal) {
        accountNumber = acc;
        balance = bal;
    }

    void deposit(float amount) {
        balance = balance + amount;
    }

    void withdraw(float amount) {
        if(amount <= balance) {
            balance = balance - amount;
        }
        else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void displayBalance() {
        cout << "Balance = " << balance;
    }
};

int main() {
    BankAccount obj(101, 5000);

    obj.deposit(1000);
    obj.withdraw(2000);

    obj.displayBalance();

    return 0;
}