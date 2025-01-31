/*
autore: Da Ros Marco
data: 
compilatore: mingw64
titolo: 
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const float a=0.4;
    const float b=0.1;
    const float Area=a*b;

    double n;
    cout << "inserire area" << endl;
    cin >> n;
    while (true)
    {
        if (n == Area)
        {
            cout << "Hai indovinato l'area che è di " << Area <<endl;
            exit;
        }

        if (n > Area)
        {
            cout << "prova con qualcosa di più piccolo" << endl;
        }

        if (n < Area)
        {
            cout << "prova con qualcosa di più grande" << endl;
        }
        cout << "inserire area" << endl;
        cin >> n;
    }
}