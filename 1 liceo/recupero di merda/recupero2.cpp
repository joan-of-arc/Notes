#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main(int args, char arg[])
{
    if (args==0)
    {
        cout << "nessun input";
        exit(0);
    }
    
    for (int i = 0; i != '\0'; i++)
    {
        if ( (int)(arg[1][i]) < 48 || (int)(arg[1][i]) > 57 )
        {
            cout << "invalid argument";
            exit(0);
        }
    }

    int giorni[]={1,2,3,4,5,6,7};
    string array[7]={"lunedi","martedi","mercoledi","giovedi","venerdi","sabato","domenica"};
    cout << array[atoi(arg[1])+1];
}