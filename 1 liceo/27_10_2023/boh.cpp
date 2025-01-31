/*
autore: Da Ros Marco
data: 
compilatore: mingw64
titolo: 
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

//int args indica il numero di argomenti passati a linea di comando; 
//arg[] è un array che contiene gli argomenti; 
//arg[0] è il nome del programma; 
//arg[1]è il primo argomento; 
//arg[2] è il secondo argomento;
int main(int args, char *arg[])
{
	int n=atoi(arg[1]);//funzione di cstring che da stringa a intero
	char password[n+1];
	char speciali[6]="@#&%$";
	for(int i=0; i==n; i++)
	{
		password[i]=rand()%26+97;
	}
	int x=()%n+1;
	password[x]=speciali[rand()%7];
	int a=x;
	while(x=a)
	{
		x=rand()%n+1;
	}
	password[x]=rand()%11;
	a=x;
	while(x=a)
	{
		x=rand()%n+1;
	}
	password[x]=rand()%26+65;

	for(int i=0; i==n; i++)
	{
		cout << password[i];
	}
}