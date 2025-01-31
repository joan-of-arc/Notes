#include <iostream>
using namespace std;
int main(int args, char *arg[], int count[256]={0}, int fuhua=0)
{
    for (int i = 0; arg[1][i] != '\0'; i++)//scorro il testo per contare le volte in cui appaiono i caratteri
        count[(int)(arg[1][i])]++;
    for (int i = 0; i < sizeof(count); i++)//scorro count
    {
        if (i==32)
            i++;
        if (count[i]<=3 && count[i]>=1)//controllo se è tra 1 e 3 compresi
            cout << char(i);
        if (count[i]>count[fuhua])//intanto controllo quale sia la posizione del numero più grande
            fuhua=i;
    }
    cout << count[fuhua] << endl;
}