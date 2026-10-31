
#include<iostream>
using namespace std;

class Account {
    protected:
        int accountNumber;
        double balance;

    public:
        Account(int a, double b) {
            accountNumber = a;
            balance = b;
        }

        virtual void display() {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
        }
};

class SavingsAccount : public Account {
    private:
        float interestRate;

    public:
        SavingsAccount(int a, double b, float i) : Account(a, b) {
            interestRate = i;
        }

        void display() override {
            cout << "\nSavings Account " << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
            cout << "Interest Rate: " << interestRate << "%" << endl;
        }
};

class CurrentAccount : public Account {
    private:
        double overdraftLimit;

    public:
        CurrentAccount(int a, double b, double o) : Account(a, b) {
            overdraftLimit = o;
        }

        void display() override {
            cout << "\n Current Account " << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Balance: " << balance << endl;
            cout << "Overdraft Limit: " << overdraftLimit << endl;
        }
};

int main() {
    SavingsAccount s1(101, 50000, 5.5);
    SavingsAccount s2(102, 75000, 6.0);

    CurrentAccount c1(201, 100000, 20000);
    CurrentAccount c2(202, 150000, 30000);

    s1.display();
    s2.display();

    c1.display();
    c2.display();

    return 0;
}
