#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    //&a restituisce l'indirizzo di ram di a
    int *b;//8B
    b++;//aumento l'indirizzo
    cout <<*b<<endl;//butta fuori il valore di b non l'indirizzo di b


    int *y=new int[10];//riserva 10 slot di ram continui, y punta all'inizio, puo essere modificato durante l'esecuzione
    for (int i = 0; i < 10; i++)
    {
        //y[i]
        *(y+i)=rand()%100;
    }
    delete y;//deallocare, non cancella cur ram..., delete fa solo in modo che non punti piu li 
    y=new int[20];//aumenta la dimensione

    int *k=NULL;//non punta a niente
}