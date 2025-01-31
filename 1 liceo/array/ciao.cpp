/*
autore: Da Ros Marco
data: 13/11/2023
compilatore: mingw64
titolo: valorizzazione array pari
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

//valorizzare array con numeri casuali pari

int main(int args, char *arg[])
{
	int array[atoi(arg[1])];
	int x;
	int i=0;
	
	while(i<atoi(arg[1]))//metto dentro all'array numeri random e nel caso il numero sia pari aumento la variabile guida
	{
		array[i]=rand();
		if (array[i]%2==0)
		{
			i++;
		}
	}

	i=0;//output
	while (i<atoi(arg[1]))
	{
		cout << array[i];
		i++;
	}
	
	
}
