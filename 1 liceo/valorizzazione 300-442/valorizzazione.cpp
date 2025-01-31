#include <iostream>
#include <cstdlib>
using namespace std;
int main(int args, char *arg)
{
    int array[atoi(arg[1])];
    for (int i = 0; i<arg[1] && i <= 142; i=i+2)//riempio l'array aumentando i di 2 così da aiutarmi per riempirlo solo di pari; il 142 è per evitare che superi il numero 442
    {
        array[i]=i+300;
    }
    for (int i = 0; i < arg[1] && i<= 142; i++)//output
    {
        cout << array[i];
    }
    int cout=0; // conto le volte che viene diviso
    for (int i = 0; i <= 142; i++)
    {
        if (array[i]%8==0)
        {
            count++;
        }
    }
    cout << count;
}