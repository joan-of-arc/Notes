#include<iostream>
#include<ctime>
#include<cstring>
#include<cstdlib>
using namespace std;

//invertire una stringa
int main(int args, char *arg[])
{
	const int SIZE=1000;
	char array[SIZE];
	int i=0;

	if (args==1)//controllo che ci sia un input
	{
		cout<<"errore nessun input"<<endl;
		exit;
	}
	
	strcpy(array,arg[1]);
	int length=0;
	while(array[length++]!='\0');
	length--;

	while(array[i]!='\0')
	{
		array[i+length+1]=array[i];
		i++;
	}
	i=0;
	while(i!=length)
	{
		array[i]=array[length*2-i];
		i++;
	}
	for(i=0; i<length; i++)
	{
		cout<<array[i];
	}
	return 0;
}