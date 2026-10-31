#include<iostream>
using namespace std;

int main()
{
    float a, b;
    char op;

    cout<<"Enter expression (a operator b): ";
    cin>>a>>op>>b;

    try
    {
        switch(op)
        {
            case '+':
                cout<<"Result: "<<a+b;
                break;

            case '-':
                cout<<"Result: "<<a-b;
                break;

            case '*':
                cout<<"Result: "<<a*b;
                break;

            case '/':
                if(b==0)
                {
                    throw 1;
                }

                cout<<"Result: "<<a/b;
                break;

            default:
                throw op;
        }
    }
    catch(int x)
    {
        cout<<"Division by Zero Error.";
    }
    catch(char c)
    {
        cout<<"Invalid Operator.";
    }

    return 0;
}