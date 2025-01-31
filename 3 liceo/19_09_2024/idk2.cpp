#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE=17;

//void val(int *a);
void print(int *a);
//bool check(int *a, int n);
void exchange(int *a);

int main()
{
    srand(time(0));
    int *alunni=new int[SIZE];
    exchange(alunni);
    print(alunni);
    delete alunni;
    return 0;
}

/*void val(int *a)
{
    for (int i = 0; i < SIZE; i++)
        *(a+i)=i+1;
}*/

void print(int *a)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(a+i) << "   ";
}

/*bool check(int *a, int n)
{
    for (int i = 0; i < SIZE; i++)
        if(*(a+i)==n)
            return false;
    return true;
}*/

void exchange(int *a)
{
    int count[SIZE]={0};
    int t=rand()%SIZE;
    for (int i = 0; i < SIZE; i++)
    {
        while (count[t]!=0)
            t=rand()%SIZE;
        count[t]++;
        *(a+i)=t+1;
    }
}