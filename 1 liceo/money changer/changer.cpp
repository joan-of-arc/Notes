#include <iostream>
#define types 15
using namespace std;
int main()
{
    float type[types]={0.01, 0.02, 0.05, 0.10, 0.20, 0.50, 1, 2, 5, 10, 20, 50, 100, 200, 500};
    double money=0;
    int change[15]={0};
    for (int i = 0; i < types; i++)
    {
        double temp;
        cout << "insert number of " << type[i] << " euro" << endl;
        cin >> temp;
        money=money+temp*type[types-i-1];
    }
    for (int i = types-1; i>=0; i--)
    {
        change[i]=money/type[i];
        money=money-change[i]*type[i];
    }
    for (int i = types-1; i>=0; i--)
    {
        cout << change[i] << " pezzi da " << type[i] << endl;
    }
}