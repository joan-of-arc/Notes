/*
autore: Da Ros Marco
data: 2_11_2023
compilatore: mingw64
titolo: cifrario di Cesare
*/

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int main(int args, char *arg[])
{
	const int SASSO=1000;
	const int key=2;
	char text[SASSO];
	strcpy(text,arg[1]);
	int i=0;
	while(text[i]!='\0')
	{
		text[i]=(char)((int)(text[i])+key);
		i++;
	}
	cout<<text<<endl;
}