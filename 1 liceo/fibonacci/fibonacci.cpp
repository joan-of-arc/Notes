/*
autore: Da Ros Marco
data: 
compilatore: mingw64
titolo: 
*/

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int args, char *arg[])
{
	if(args==1)
	{
		cout << "errore nessun input";
		exit;
	}
	
	try
	{
		int n=stoi(arg[1]); //lancia le eccezioni di invalid argument e out of range, non prende come invalid argument se le lettere sono dopo i numeri
		int i=0;
		while(arg[1][i]!='\0')
		{
			if( 48>((int)arg[1][i]) || 57<((int)arg[1][i]) )
			{
				throw "argomento non valido";
			}
			i++;
		}
	}
	catch(const out_of_range &t)
	{
		cout << t.what() << endl;
	}
	catch(const out_of_range &t)
	{
		cout << t.what() << endl;
	}
	catch(const char*t)
	{
		cout << t <<endl;
	}

	int a=0;
	int b=1;
	int c;
	cout << "0, 1, ";
	for(int i=0; i<=(stoi(arg[1])); i++)
	{
		cout << (a+b) << ", ";
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}