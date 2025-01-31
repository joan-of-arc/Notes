#include <iostream>
using namespace std;
int main(int args, char *arg[])//prendo gli input come arg 1 e 2
{
    const int size=256;
    int count1[size]={0};
    int count2[size]={0};
    for (int i = 0; i != '\0'; i++)//conto quante appaiono tutti i caratteri in arg1 e li salvo in count1
        count1[(int)(arg[1][i])]++;
    for (int i = 0; i != '\0'; i++)//conto quante appaiono tutti i caratteri in arg2 e li salvo in count2
        count2[(int)(arg[2][i])]++;
    for (int i = 0; i < size; i++)//scorro count 1 e 2
    {
        if (count1[i]!=count2[i])
        {
            cout << "caratteri diversi individuati" << endl;
            exit(0);
        }
    }
    cout << "nessun carattere diverso individuato" <<endl;
}