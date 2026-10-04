#include<iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    double balance;

    void input()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter balance: ";
        cin >> balance;
    }

    void transfer(BankAccount &receiver, double amount)
    {
        if(balance >= amount)
        {
            balance = balance - amount;
            receiver.balance = receiver.balance + amount;

            cout << "Transfer Successful";
        }
        else
        {
            cout << "Insufficient Balance";
        }
    }

    void display()
    {
        cout << "\nAccount Number = " << accountNumber;
        cout << "\nBalance = " << balance;
    }
};

int main()
{
    BankAccount a1, a2;
    double amount;

    cout << "Enter details of Account 1\n";
    a1.input();

    cout << "\nEnter details of Account 2\n";
    a2.input();

    cout << "\nEnter amount to transfer: ";
    cin >> amount;

    a1.transfer(a2, amount);

    cout << "\n\nAccount 1:";
    a1.display();

    cout << "\n\nAccount 2:";
    a2.display();

    return 0;
}