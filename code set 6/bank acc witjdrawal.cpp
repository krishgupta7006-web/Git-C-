#include<iostream>
using namespace std;

class BankAccount
{
    private:
        float balance;

    public:
        BankAccount(float b)
        {
            balance=b;
        }

        void withdraw(float amount)
        {
            try
            {
                if(amount>balance)
                {
                    throw amount;
                }

                balance=balance-amount;

                cout<<"Withdrawal Successful"<<endl;
                cout<<"Remaining Balance: "<<balance;
            }
            catch(float x)
            {
                cout<<"Error: Insufficient Balance.";
            }
        }
};

int main()
{
    float balance, amount;

    cout<<"Enter Balance: ";
    cin>>balance;

    cout<<"Enter Withdrawal Amount: ";
    cin>>amount;

    BankAccount b1(balance);

    b1.withdraw(amount);

    return 0;
}