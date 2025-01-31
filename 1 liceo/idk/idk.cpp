#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
int ciao(int mat[2][2]);
int main()
{
    int boh[2][2]={{1,2},{3,4}};
    ciao(boh);
}

int ciao(int mat[2][2])
{
    return mat[1][1];
}