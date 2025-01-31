#include <iostream>
#include <ctime>
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

    int mesi[]={1,2,3,4,5,6,7,8,9,10,11,12};
    int giorni[]={31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cout << giorni[aoti(arg[1])+1];
}