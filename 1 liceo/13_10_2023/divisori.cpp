/*
autore: Da Ros Marco
data: 12/10/2023
compilatore: mingw64
titolo: fattori primi di un numero
*/

#include <iostream>
using namespace std;

int main()
{
    //input
    int n;
    cout << "immettere numero intero positivo ";
    cin >> n;
    while (n<0)
    {
        cin >> n;
    }
    
    //divido n per un a in costante aumento che se usato come divisore nella % da risultato 0 lo stampo 
    int a=2;
    int b=1;
    int c=0;
    cout << "1" << ", ";
    while (a!=(n+1))
    {
        if (n%a==0)
        {
            //individuo se il numero è primo
            b=1;
            c=0;
            while (c<2)
            {
                if (a%b==0)
                {
                    c=c+1;
                }
                b=b+1;
            }
            if (b==(a+1))
            {
                cout << a << ", ";
            }
            
        }
        a=a+1;
    }
}