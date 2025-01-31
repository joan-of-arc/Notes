/*
autore: Marco Da Ros
data: 05/11/23
compilatore: minGW 64
titolo: CIFRARIO DI CESARE
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cstring>
#include<limits>
using namespace std;

int main(int args, char *arg[])
{
    const int SIZE=1000;
    const int key=1000;
    char array[SIZE];
    strcpy(array,arg[1]);

    try
    {
        strcpy(array,arg[1]);
        if (array[0]=='\0'||cin.peek()!='\n')//controllo se non ha messo nulla
        {
            throw "input error";
        }
    }
    catch(const char *s)
    {
        cout<<s<<endl;
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    }

    int i=0;
    while(array[i]!='\0')
    {
        array[i]=(char)((int)array[i]+ key);//67+3 tutto in caratteri
        i++;
    }
    cout<<array<<endl;
}