#include <iostream>
using namespace std;
int main(int args, char *arg[])
{
    int n=atoi(arg[1]);
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (j+i==n)
            {
                cout << j << "+" << i << ", ";
            }
        }
    }
}