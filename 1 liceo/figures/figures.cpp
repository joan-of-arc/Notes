#include <iostream>
using namespace std;
int xiao(int n);
void tocifre(int f[], int n);
bool isfull(int f[]);
bool check(int n);

int main()
{
    int n;
    cin >> n;
    if (n<1 || n>100)
    {
        cout << "input non valido" << endl;
        return 0;
    }
    int k[n];
    for (int i = 0; i < n; i++)
    {
        cin >> k[i];
        if(check(k[i])==false)
            return 0;
        cout << "output: " << xiao(k[i]) << endl;
    }
    return 0;
}

bool check(int n)
{
    if (n<1 || n>(1e8))
    {
        cout << "input non valido" << endl;
        return false;
    }
    return true;
}

int xiao(int n)
{
    int f[10]={0};
    int conta=1;
    while (isfull(f)==false)
    {
        tocifre(f, conta*n);
        conta++;
    }
    return conta-1;
}

bool isfull(int f[])
{
    for (int i = 0; i < 10; i++)
        if (f[i]==0)
            return false;
    return true;
}

void tocifre(int f[], int n)
{
    int number[9]={0};
    for (int i = 9; i!=0; i--)
    {
        number[i-1]=n%10;
        n=n/10;
    }
    for (int i = 0; i < 9; i++)
        if (number[i]!=0)
        {
            for (; i < 9; i++)
                f[number[i]]++;
            return;
        }
}