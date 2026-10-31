#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ifstream file("article.txt");

    if(!file)
    {
        cout<<"File not found.";
        return 0;
    }

    char ch;
    int characters=0, words=0, lines=0;
    bool inWord=false;
    bool hasContent=false;

    while(file.get(ch))
    {
        characters++;
        hasContent=true;

        if(ch=='\n')
        {
            lines++;
        }

        if(ch==' ' || ch=='\n' || ch=='\t')
        {
            inWord=false;
        }
        else if(!inWord)
        {
            words++;
            inWord=true;
        }
    }

    if(hasContent && characters>0)
    {
        ifstream file2("article.txt");

        char last;
        file2.seekg(-1,ios::end);
        file2.get(last);

        if(last!='\n')
        {
            lines++;
        }
    }

    cout<<"Characters: "<<characters<<endl;
    cout<<"Words: "<<words<<endl;
    cout<<"Lines: "<<lines<<endl;

    file.close();

    return 0;
}