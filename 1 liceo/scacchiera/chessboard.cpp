#include <iostream>
#define R 4
#define C 4
using namespace std;
bool checkrow(int mat[R][C], int r);
bool checkcolumn(int mat[R][C], int c);
int main()
{
    int chess[R][C]={{4,5,4,5},{4,5,4,5},{4,5,4,5},{4,5,4,5}};
    for (int i = 0; i < C; i++)
        if (!checkrow(chess, i) || !checkcolumn(chess, i))
        {
            cout << "non /212 una scacchiera" << endl;
            exit(0);
        }
    cout << "/212 una scacchiera" << endl;
}

bool checkrow(int mat[R][C], int r)
{
    for (int i = 0; i < C; i++)
    {
        if (i%2==0 && mat[r][i]!=mat[r][0])
            return false;
        else if (i%2==1 && mat[r][i]!=mat[r][1])
            return false;
    }
    return true;
}

bool checkcolumn(int mat[R][C], int c)
{
    for (int i = 0; i < R; i++)
    {
        if (i%2==0 && mat[i][c]!=mat[0][c])
            return false;
        else if (i%2==1 && mat[i][c]!=mat[1][c])
            return false;
    }
    return true;
}