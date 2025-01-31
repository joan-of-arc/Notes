/*
autore: Da Ros Marco
data: 13/11/2023
compilatore: mingw64
titolo: valorizzazione array decimali
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    cout << "immetti un numero" << endl;
    int n;
    cin >> n;
    float array[n];

    for (int i = 0; i < n; i++)//genero numeri da 25 a 128 e li divido per 10 in modo da renderli decimali
    {
        array[i]=(rand()%104+25)/10;
    }

    for (int i = 0; i < i; i++)//output
    {
        cout << array[i];
    }
    return 0;
}