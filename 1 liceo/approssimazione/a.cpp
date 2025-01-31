/*
autore: Da Ros Marco
data: 19/11/2023
compilatore: mingw64
titolo: approximation
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
#define int SIZE=1000
using namespace std;

int main(int args; char *arg[])
{
	if (args==1)//controllo situazione no input
	{
		cout << "errore nessuno input" << endl;
		exit;
	}

	int i=0;
	while(arg[1][i]!='\0')//controllo che siano stati immessi numeri facendo scorrere l'array e lanciando un cast controllo che il numero risultante sia compreso tra 48 e 57 che sono i numeri nella ascii
	{
		if( 48>((int)arg[1][i]) || 57<((int)arg[1][i]) )
		{
			cout << "errore input non valido" << endl;
			exit;
		}
		i++;
	}

	if (arg[1]>SIZE)//controllo se k è maggiore di size
	{
		cout << "input troppo grande" << endl;
		exit;
	}

	int array[SIZE];
	srand(time(0));
	int k=atoi(arg[1]);
	
	for(int i=0; i<k; i++)//valorizzo con numeri random
	{
		array[i]=rand()%10;
	}
	
	for(int i=0; i<k; i++)//faccio scorrere l'array al contrario sottrando alla grandezza totale il "i" a cui siamo arrivati e in caso sia maggiore di 5 aumento di uno la quantità precedente
	{
		if(array[k-i]>=5)
		{
			array[k-i-1]=array[k-i-1]+1;
		}
	}
	
	for(int i=0; i<k; i++)//output
	{
		cout << array[i];
	}
}