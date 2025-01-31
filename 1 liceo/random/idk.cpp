#include <iostream>
using namespace std;

void *scambia(int *a, int *b)
{
    int *temp=a;
    *a=*b;
    *b=*temp;
    return;
}

int main()
{
    int *a=new int(7);
    int *b=new int(9);
    int *c[10];
    return 0;
}