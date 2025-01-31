#include <iostream>

using namespace std;

struct nodo
{
    int value;
    nodo *next;
};

void stampa(nodo *testa);
nodo *val(int n);
void creaLOrdinata(nodo *&testa, int arr[], int n);

int main()
{
    nodo *testa=NULL;
    int arr[]={3,6,77,1,0,0,2,1,1,8};
    int n=sizeof(arr)/sizeof(int);
    creaLOrdinata(testa, arr, n);

    stampa(testa);
}

void stampa(nodo *testa)
{
    if(testa)
    {
        cout << testa->value << " ";
        stampa(testa->next);
    }
}

void creaLOrdinata(nodo *&testa, int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        nodo *nuovo = new nodo{arr[i], NULL};

        if (testa == NULL)
        {
            testa = nuovo;
        }
        else
        {
            nodo *prev = NULL;

            nodo *index = testa;

            int action = 0;

            while (index != NULL && action == 0)
            {
                if (nuovo->value > index->value)
                {
                    if (prev == NULL)
                    {
                        if (testa == NULL)
                        {
                            testa = nuovo;
                        }
                        else
                        {
                            nodo *tmp = testa; 
                            testa = nuovo;
                            testa->next = tmp; 
                        }
                        action++;
                    }
                    else
                    {
                        prev->next = nuovo;
                        nuovo->next = index;
                        action++;
                    }
                }
                if(index->next == NULL && action == 0)
                {
                    index->next = nuovo;
                }
                prev = index;
                index = index->next;
            }
        }
    }
}