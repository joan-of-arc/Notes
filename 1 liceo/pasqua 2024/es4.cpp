#include <iostream>
using namespace std;
void change(string mystring);

void change(string mystring)
{
    for (int i = 0; i < mystring.length(); i++)
    {
        if (mystring[i]=='A')
            mystring[i]='Z';
        else if (mystring[i]=='a')
            mystring[i]='z';
        else
            mystring[i]=(int)(char(mystring[i])+1);
    }
}