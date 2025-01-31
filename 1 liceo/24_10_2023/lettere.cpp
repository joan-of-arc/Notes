/*
autore: Da Ros Marco
data: 23/10/2023
compilatore: mingw64
titolo: lettere casuali randomiche maiuscole o minuscole
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    for (int i=0; i<20; i++)
    {
        int x=rand()%11;

        if (x%2==0)
        {
            int n=rand()%26+65;
            cout << char(n) << " ";
        }
        else
        {
            int n=rand()%26+97;
            cout << char(n) << " ";
        }
    }
}