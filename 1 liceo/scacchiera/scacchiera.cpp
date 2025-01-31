#include <iostream>
#define R 3
#define C 3
using namespace std;
int main()
{
    int mat[R][C]={{2,4,2},{4,2,4},{2,4,2}};
    int vector[R*C];
    int b;
    if (R>1)
        b=mat[1][0];
    else if (C>1)
        b=mat[0][1];
    else
        cout << "è a scacchiera" << endl;
    for (int i = 0, x=0; i < R; i++)//metto la matrice in un vettore
        for (int j = 0; j < C; j++,x++)
            vector[x]=mat[i][j];
    for (int i = 0; i < sizeof(vector)/sizeof(int); i++)//faccio scorrere il vettore
    {
        if (i%2==0 && vector[i]!=mat[0][0])//in base a se i è pari o no allora vuol dire che devo controllare uno o l'altro valore della scacchiera
        {
            cout << "non è a scacchiera" << endl;
            exit(0);
        }
        else if (i%2!=0 && vector[i]!=b)
        {
            cout << "non è a scacchiera" << endl;
            exit(0);
        }
    }
    cout << "è a scacchiera" << endl;
}