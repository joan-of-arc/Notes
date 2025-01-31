#include <iostream>
#include <ctime>
using namespace std;

struct nodo
{
    int value;
    nodo *next;
};

//linked lists are made of linked nodes, each node has a value and a pointer to the next node

void Val(nodo *&Head, int Value);
void Print(nodo *Head);//print the list
nodo *PushHeap(int n);//create a list of n elements
void PushStack(nodo *&Head, int n);//create a list of n elements
void removeN(nodo *&Head, int n);
void invers(nodo *&Head);

int main()
{
    srand(time(0));

    return 0;
}

void Val(nodo *&Head, int Value)//adds a node to the list
{
    nodo *New = new nodo{Value, nullptr};
    if (!Head)
        Head = New;
    else
    {
        nodo *temp = Head;
        Head = New;
        Head -> next = temp;
    }
}

void Print(nodo *Head)//print the list
{
    if(Head)
    {
        cout << Head->value << " ";
        Print(Head->next);
    }
}

nodo *PushHeap(int n)//in heap mode
{
    static int k=0;//static are shared across all the function calls
    return n ? new nodo{k++, PushHeap(n-1)} : nullptr;//if you want it to be random remove instead of k++ put rand()%100
}

void PushStack(nodo *&Head, int n)//in stack mode
{
    static int k=0;
    nodo *New = new nodo{k++, nullptr};
    if (n != 0)
    {
        New->next = Head;
        Head = New;
        PushStack(Head, n-1);
    }
}

void removeN(nodo *&Head, int n)//removes the n-th node of thelist
{
    if (!n)
    {
        nodo *temp = Head;
        Head = Head->next;
        delete temp;
        return;
    }
    
    nodo *temp = Head;
    for (int i = 0; i < n - 1; i++)//start counting from 0
        temp = temp->next;
    delete temp->next;
    temp->next=temp->next->next;
}

void invers(nodo *&Head)//inverts the list
{
    nodo *previous = nullptr;
	nodo *n = Head;
	nodo *next = nullptr;
	while (n)
    {
		next = n->next;
		n->next = previous;
		previous = n;
		n = next;
	}
	Head = previous;
}