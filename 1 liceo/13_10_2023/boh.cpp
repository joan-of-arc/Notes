/*
autore: Da Ros Marco
data: 
compilatore: mingw64
titolo: 
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
    
    //divido n per un numero in costante aumento che se usato come divisore nella % da risultato 0 lo stampo 
    int a=1;
    int b=1;
    int c=0;
    while (a!=(n+1))
    {
        if (n%a==0)
        {
            c=0;
            b=0;
            while (b!=(a+1))
            {
                if (a%b==0)
                {
                    c=c+1;
                }
                b=b+1;
            }
            if (c==2)
            {
                cout << a << ", ";
            }
        }
        a=a+1;
    }
}