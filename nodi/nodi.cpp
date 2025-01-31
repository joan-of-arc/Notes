#include <iostream>
#include <ctime>
using namespace std;

struct nodo
{
    int value;
    nodo *next;
};

//le liste concatenate sono usate per gestione dati nei database e in generale in tutti gli ambiti in cui si gestiscono i dati in modo dinamico
//"linked struct"
//una delle principale caratteristich è la flessibilità, puoi aggiungere o togliere roba velocemente
//la dimensione può variare runtime/dinamicamente

void val(nodo *&testa, int value);
void stampa(nodo *testa);
nodo *push(int n);
void pushtesta(nodo *&testa, int n);
void removeN(nodo *&testa, int n);
void invers(nodo *&testa);

int main()
{
    srand(time(0));
	
    nodo *testa = push(5);
    stampa(testa);

    return 0;
}

void val(nodo *&testa, int value)
{
    nodo *nuovo = new nodo{value, NULL};
    if (testa == NULL)
        testa = nuovo;
    else
    {
        nodo *temp = testa;
        testa = nuovo;
        testa -> next = temp;
    }
}

void stampa(nodo *testa)
{
    if(testa)
    {
        cout << testa->value << " ";
        stampa(testa->next);
    }
}

nodo *push(int n)//in coda
{
    static int k=0; 
    return n ? new nodo{k++, push(n-1)} : NULL;
}

void pushtesta(nodo *&testa, int n)//in testa
{
    static int k=0;
    nodo *nuovo = new nodo{k++, NULL};
    if (n != 0)
    {
        nuovo->next = testa;
        testa = nuovo;
        pushtesta(testa, n-1);
    }
}

void removeN(nodo *&testa, int n)
{
    if (n==0)
    {
        nodo *temp = testa;
        testa = testa->next;
        delete temp;
        return;
    }
    
    nodo *temp = testa;
    for (int i = 0; i < n - 1; i++)//metti -2 in caso tu voglia iniziare a contare da 1
        temp = temp->next;
    delete temp->next;
    temp->next=temp->next->next;
}

void invers(nodo *&testa)
{
    nodo *prec = NULL;
	nodo *n = testa;
	nodo *succ = NULL;
	while (n != NULL) 
    {
		succ = n->next;
		n->next = prec;
		prec = n;
		n = succ;
	}
	testa = prec;
}