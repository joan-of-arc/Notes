#include <iostream>
using namespace std;
int main()
{
    char vocali[1000];
    char consonanti[1000];
    int vocals=0;
    int consonants=0;
    char array[11]="ciao mondo"; //assegno l'array
    for (int i = 0; i < 11; i++)//faccio scorrere l'array
    {
        if ((array[i])(int)==97 || (array[i])(int)==101 || (array[i])(int)==105 || (array[i])(int)==111 || (array[i])(int)==117 )//se è una vocale
        {
            vocali[vocals]=array[i];//lo metto in un array di vocali
            vocals++;
        }
        else//se non lo è
        {
            consonanti[consonants]=array[i];//lo metto in un array di consonanti
            consonants++;
        }
    }
    cout << consonanti[] << vocali[] << endl;//output
}