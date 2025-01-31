#include <iostream>
using namespace std;
void molt(int n)
{
    int f[n]={0};
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            f[i]++;
            i=2;
        }
    }
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if (f[i]>f[max])
        {
            max=1;
        }
    }
    cout << f[max] << max << endl;
}