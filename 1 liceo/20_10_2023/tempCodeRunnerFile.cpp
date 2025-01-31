/*
autore: Da Ros Marco
data: 19/10/2023
compilatore: mingw64
titolo: rng
*/

#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int c=0;
    int rng[20];

    while (c<=20)
    {
        for (int i = 0; i < 20; i++)
        {
            if (c==20)
            {
                return 0;
            }
            rng[i]=rand()%21;
            if (rng[i]%2==0)
            {
                if (rng[i]>1)
                {
                    cout << rng[i] << " ";
                    c=c+1;
                }
            }
        }
    }
}