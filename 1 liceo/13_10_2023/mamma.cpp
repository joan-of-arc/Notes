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
    while (a!=(n+1))
    {
        if (n%a==0)
        {
            cout << a << ", ";
        }
        a=a+1;
    }
}