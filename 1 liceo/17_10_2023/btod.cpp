/*
autore: Da Ros Marco
data: 16/10/2023
compilatore: mingw64
titolo: BtoD
*/

#include <iostream>
using namespace std;

//chiedo il numero binario in un ciclo mentre lo moltiplico *2 e li sommo n
int main()
{
    int x=0;
    int n=0;

    while (n==0 || n==1)
    {
        cout << "inserire 0 o 1 ";
        cin >> n;
        if (n==0 || n==1)
        {
            x=(x*2)+n;
        }
        else
        {
            cout << x;
        }
    }
}