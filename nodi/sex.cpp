#include<iostream>
#include <ctime>
using namespace std;

struct nodo
{
    int value;
    nodo *next;
};

nodo *val(int n);
void es2(nodo *&testa);
void print(nodo *testa);

int main()
{
    nodo *testa = val(5);
    es2(testa);
    print(testa);
}

void print(nodo *testa)
{
    if (testa)
    {
        cout << testa->value << " ";
        print(testa->next);
    }
}

void es2(nodo *&testa)
{
    nodo *prec = NULL;
    nodo *t = testa;
    while (t != NULL)
    {
        if (prec)
        {
            if ( prec->value != 10 && t->value == 10)
            {
                prec->next = t->next;
                t->next = testa;
                testa = t;
            }
        }
        prec = t;
        t = t->next;
    }
}

nodo *val(int n)
{
    return n ? new nodo{rand()%100+1, val(n-1)} : NULL;
}