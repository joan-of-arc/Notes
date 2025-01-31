#include <iostream>
using namespace std;

int lowdiff(int a, int b, int k=0);

int main()
{
    int a=20, b=6;
    cout << lowdiff(a,b) << endl;
    return 0;
}

int lowdiff(int a, int b, int k)
{
    if (a==b)
        return k;
    if (a>b)
        a--;
    else
        a++;
    k++;
    k=lowdiff(a, b, k);
    return k;
}