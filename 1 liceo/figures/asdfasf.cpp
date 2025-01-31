#include <iostream>
using namespace std;

bool full(int array[]);
void valor(int array[]);
void cifre(int a, int array[]);

int main()
{
    int array[10];
    int N;
    cin >> N;
    int K[N];
    for (int i = 0; i < N; i++)
    {
        cin>>K[i];
        valor(array);
        int conta=1;
        while(full(array)==false)
        {
            cifre(K[i]*conta, array);
            conta++;
        }
        cout<<conta-1<<endl;
    }
}

bool full(int array[])
{
    for (int i=0; i<10;i++)
    {
        if (array[i]==0)
        {
            return false;
        }
    }
    return true;
}

void valor(int array[])
{
    for (int i=0;i<10; i++)
    {
        array[i]=0;
    }
}

void cifre(int a, int array[])
{
    array[a%10]++;
    a=a/10;
    while (a!=0)
    {
        array[a%10]=1;
        a=a/10;
    }
}