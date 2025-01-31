#include <iostream>
#include <ctime>

using namespace std;

//lista random, if value==50 l1 else l2, 

struct nodo
{
    int value;
    nodo *next;
};

void print(nodo *n);
nodo *val(int n);
void separaliste(nodo *testa, nodo *&prenotati, nodo *&non_prenotati);
nodo *valN(int n);

int main()
{
    srand(time(0));

    nodo *testa = val(5);
    nodo *l1 = new nodo{0, NULL};
    nodo *l2 = new nodo{0, NULL};

    print(testa);

    separaliste(testa, l1, l2);

    cout << endl;
    print(l1);
    cout << endl;
    print(l2);

    return 0;
}

nodo *val(int n)
{
    return n ? new nodo{rand()%100+1, val(n-1)} : NULL;
}

nodo *valN(int n)
{
    return n ? new nodo{50, valN(n-1)} : NULL;
}

void print(nodo *n)
{
    if(n)
    {
        cout << n->value << " ";
        print(n->next);
    }
}

void separaliste(nodo *testa, nodo *&prenotati, nodo *&non_prenotati)
{
    nodo *temp = testa;
    nodo *start = testa;
    int count = 0;
    nodo *prev = new nodo{0, NULL};
    while (temp != NULL)
    {
        if (temp->value == 50)
        {
            if (prev->next != NULL)
                prev->next = temp->next;
            else
                start = start->next;
            count ++;
            temp = temp->next;
        }
        else
        {
            prev = temp;
            temp = temp->next;
        }
    }
    non_prenotati=start;
    prenotati=valN(count);
}