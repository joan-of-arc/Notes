#include <iostream>
using namespace std;

/*il concetto di base è che creo un array "characters" che valorizzo con la tabella ascii che associo ad un secondo array "count" in cui metto i numeri di ripetizioni ad esempio
count[10] è il numero di ripetizioni di characers[10] e poi fatti questi 2 array il resto è solo un po' di condizioni*/

int main(int args, char *arg[])
{
    char text[]=arg[1];//in text salvo il test

    char characters[256];//qui salvo tutti i 256 caratteri della tabella ascii

    for (int i = 0; i < 256; i++)//valorizzo con tutti i 256 caratteri della tabella ascii convertendo in char la i col cast
    {
        characters[i]=char(i);
    }
    
    int count[sizeof(characters)];//credo un secondo array in cui salvare il numero di ripetizioni dei vari caratteri

    for (int i = 0; i < sizeof(count); i++)//valorizzo count con 0
    {
        count[i]=0;
    }
    

    for (int i = 0; i < sizeof(characters); i++)//controllo i numeri di ripetizioni, scorro l'array characters
    {
        for (int j = 0; j < sizeof(text); j++)//per ogni carattere di characters scorro l'intero testo
        {
            if (text[i]==characters[i])//controllo se i 2 sono uguali
            {
                count[i]++;//aggiorno count
            }
        }
    }

    char password[sizeof(characters)];//array che conterrà la soluzione
    int passwordcount=0;//variabile che farà da indice della password

    for (int i = 0; i < sizeof(password); i++)//valorizzo di \0
    {
        password[i]='\0';
    }
    

    for (int i = 0; i < sizeof(count); i++)//scorro count
    {
        if (count[i]<=3 && count[i]>=1)//se trovo caratteri tra 1 e 3
        {
            password[passwordcount]=characters[i];//li metto nella soluzione
        }
    }

    int highest_position;//variabile che conterrà l'indice di count del carattere che comparirà più volte
    for (int i = 0, highest_number=0; i < sizeof(count); i++)//faccio scorrere count
    {
        if (count[i]>highest_number)//controllo se il numero count[i] è maggiore del maggiore numero finora incontrato in count
        {
            highest_number=count[i];//aggiorno il numero maggiore incontrato finora
            highest_position=i;//aggiorno la posizione del numero
        }
    }
    password[passwordcount]=characters[highest_position];//aggiungo l'ultimo carattere a password
    cout << password;//output
}