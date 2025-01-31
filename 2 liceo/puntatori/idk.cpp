#include <iostream>
using namespace std;

const int SIZE=10;

void valorizza(int *array);

int main()
{
    //variabili normali
    int a=5;

    cout << a << endl;
    a=a+7;
    if (a==12)
    {
        cout << "a vale: " << a << endl;
    }



    //puntatori
    int *b;

    int *b=new int(8);

    //int c=8;
    //int *b=&c;

    //dentro b non c'è 8

    cout << b << endl; //viene fuori l'indirizzo

    cout << *b << endl; //viene fuori 8



    int *array=new int[SIZE];

    cout << array;

    valorizza(array);

    *(array+8);

    *(array+1)=32;
}

















void valorizza(int *array)
{
    for (int i = 0; i < SIZE; i++)
    {
        //a[i]=i+1
        *(array+i)=i+1;
    }
}