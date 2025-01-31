#include<cstring>
#include<limits>
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main(int args, char *arg[])
{
    const int SIZE=1000;
    char array[SIZE];
    strcpy(array,arg[1]);

    int n;
    cout<<"inserire numero di tentativi ";
    cin>>n;
    int b=1;
    int a=0;

    for (int i = 0; i < n; i++)
    {
        a=0;
        while(array[a]!='\0')
        {
            array[a]=(char)((int)array[a]+ b);
            a++;
        }
        cout<<array<<" con chiave "<<b<<endl;
        b++;
    }
}