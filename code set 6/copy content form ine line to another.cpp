#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream source("source.txt");
    ofstream destination("destination.txt");

    if(!source)
    {
        cout<<"Source file not found.";
        return 0;
    }

    char ch;

    while(source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout<<"File copied successfully.";

    return 0;
}