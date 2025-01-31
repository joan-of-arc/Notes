/*
autore: Da Ros Marco
data: 19/10/2023
compilatore: mingw64
titolo: rng
*/

#include <cstdlib> //serve per l'rng
#include <ctime> //serve per l'rng
#include <iostream>
using namespace std;

int main()
{
    //per avere numero effettivamente casuali e non appendersi più all'orologio di sistema
    srand (time(0));
    
    int rng[100];

    for (int i = 0; i < 10; i++)
    {
        rng[i]=rand()%10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << rng[i]<< " ";
    }
}