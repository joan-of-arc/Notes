#include <iostream>
using namespace std;
#define M 10
#define N 10
void val(int mat[M][N]);
void vis(int mat[M][N]);

void val(int mat[M][N])
{
    for (int i = 0; i < M; i++)
        for (int j = 0; j < N; j++)
            if (i==j)
                mat[i][j]=1;
}

void vis(int mat[M][N])
{
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        cout << mat[i][j] << " ";
    }
    cout << endl;
}