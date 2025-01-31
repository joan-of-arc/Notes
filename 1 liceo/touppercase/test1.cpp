/*
autore: Da Ros Marco
data: 
compilatore: mingw64
titolo: 
*/

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int args, char *arg)
{
    if (args==1)//controllo situazione senza input
    {
        cout << "errore nessuno input" << endl;
        exit;
    }

    for (int i = 0; i !='\0'; i++)//controllo che non venga immessa roba strana
    {
        if ( (arg[1][i])(int)<97 || (arg[1][i])(int)>122 )
        {
            cout << "errore carattere non minuscole immesso" << endl;
            exit;
        }    
    }

    const char array[]=arg[1];//algoritmo
    for (int i = 0; i != '\0'; i++)
    {
        cout << (char)((int)(array[i])-32) << ", ";
    }
    return 0;
}