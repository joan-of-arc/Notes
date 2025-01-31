#include <cstdlib>//contiene la atoi: converte stringhe in intero
#include <iostream>
#include <ctime>
using namespace std;

int main(int args, char *arg[])
{
	if(args==1) //controllo che ci sia un input
	{
		cout << "errore nessun input" << endl;
		exit;
	}
	
	srand(time(0));
	int array[atoi(arg[1])];

	for(int i=0; i<atoi(arg[1]); i++)//metto i numeri random
	{
		array[i]=rand()%10;
	}

	for(int i=0; i<atoi(arg[1]); i++)//output
	{
		cout << array[i] << " ";
	}
	return 0;
}