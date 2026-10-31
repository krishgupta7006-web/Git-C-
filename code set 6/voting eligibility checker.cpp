#include<iostream>
using namespace std;

class VotingException
{
};

int main()
{
    int age;

    cout<<"Enter Age: ";
    cin>>age;

    try
    {
        if(age<18)
        {
            throw VotingException();
        }

        cout<<"Eligible for voting.";
    }
    catch(VotingException e)
    {
        cout<<"Exception: Not eligible for voting.";
    }

    return 0;
}