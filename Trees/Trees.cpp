#include <iostream>
#include <ctime>

using namespace std;

struct nodo
{
    int value;
    nodo *sx;
    nodo *dx;
};

void Print(nodo *Root, int Lvl);
void InOrder(nodo *Root);
void PreOrder(nodo *Root);
void PostOrder(nodo *Root);
void OrdInsert(nodo *&root, int n);
void Create(nodo *&rad, int Depth);
nodo *Min(nodo *Root);
int GetDepth(nodo *Root, int Depth);
void MorrisTrasversal(nodo *Root);//non so se funziona
nodo *Search(nodo *Root, int Value);

int main()
{
    srand(time(0));

    nodo *Root = nullptr;

    Create(Root, 3);
    Print(Root, 0);

    //MorrisTrasversal(rad);

    return 0;
}

void Print(nodo *Root, int Lvl)//stampa l'albero binario
{
    if (Root)
    {
        int k = Lvl;
        while (k>0)
        {
            cout << "*";
            k--;
        }

        cout << Root->value << endl;

        Print(Root->sx, Lvl+1);
        Print(Root->dx, Lvl+1);
    }
}

void InOrder(nodo *Root)//sx, rad, dx
{
    if (Root)
    {
        InOrder(Root->sx);
        cout << Root->value << endl;
        InOrder(Root->dx);
    }
}

void PreOrder(nodo *Root)//rad, sx, dx
{
    if(Root)
    {
        cout << Root->value << endl;
        PreOrder(Root->sx);
        PreOrder(Root->dx);
    }
}

void PostOrder(nodo *Root)//sx, dx, rad
{
    if (Root)
    {
        PostOrder(Root->sx);
        PostOrder(Root->dx);
        cout << Root->value << endl;
    }
}

void OrdInsert(nodo *&Root, int n)//inserisce n nodi nell'albero binario in modo ordinato
{
    for(int i=0; i<n; i++)
    {
        nodo *nuovo = new nodo{rand()%10, nullptr, nullptr};

        if(!Root)
        {
            Root = nuovo;
        }
        else
        {
            nodo *x = Root; 
            nodo *y = nullptr; 

            while(x)
            {
                y = x;

                if(nuovo->value > x->value)
                    x = x->dx;
                else
                    x = x->sx;
            }

            if(y->value < nuovo->value)
                y->dx = nuovo;
            else
                y->sx = nuovo;
        }
    }
}

void Create(nodo *&Root, int Depth)//crea un albero binario di profondità Depth
{
    if (!Depth)
        return;

    Root = new nodo{rand() % 10, nullptr, nullptr};

    if (Depth)
    {
        Create(Root->sx, Depth - 1);
        Create(Root->dx, Depth - 1);
    }
}

nodo *Min(nodo *Root)//restituisce il nodo con il valore minore
{
    if (!Root)
        return nullptr;
    
    nodo *MinSx = Min(Root->sx);
    nodo *MinDx = Min(Root->dx);

    nodo *Min = Root;

    if (MinSx && MinSx->value < Min->value)
        Min = MinSx;

    if (MinDx && MinDx->value < Min->value)
        Min = MinDx;

    return Min;
}

int GetDepth(nodo *Root, int Depth)//restituisce la profondità dell'albero binario
{
    if (!Root)
        return Depth-1;

    int MaxSx = GetDepth(Root->sx, Depth + 1);
    int MaxDx = GetDepth(Root->dx, Depth + 1);

    if (MaxDx > MaxSx)
        return MaxDx;
    else
        return MaxSx;
}

void MorrisTrasversal(nodo *Root)
{
    nodo *c = Root;
    while (c)
    {
        if (c->sx)
        {
            nodo *p = c->sx;
            while (p->dx && p->dx != c)
                p = p->dx;
            
            if (!p->dx)
            {
                p->dx = c;
                c = c->sx;
            }
            else
            {
                cout << c->value << " ";
                p->dx = nullptr;
                c = c->dx;
            }
        }
        else
        {
            cout << c->value << " ";
            c = c->dx;
        }
    }
}

nodo *Search(nodo *Root, int Value)
{
    if (!Root || Root->value == Value)
        return Root;

    if (Value > Root->value)
        return Search(Root->dx, Value);

    return Search(Root->sx, Value);
}