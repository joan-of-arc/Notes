#include <iostream>
using namespace std;
bool isleap(int);
int summ(int);
int sumy(int);

int main()
{
    int g1,g2,m1,m2,a1,a2;
    cout << "giorno 1" << endl;
    cin >> g1;
    cout << "mese 1" << endl;
    cin >> m1;
    cout << "anno 1" << endl;
    cin >> a1;
    cout << "giorno 2" << endl;
    cin >> g2;
    cout << "mese 2" << endl;
    cin >> m2;
    cout << "anno 2" << endl;
    cin >> a2;
    if (a1 < 1582 || a2 < 1582)
    {
        cout << "data non valida" << endl;
        exit(0);
    }
    int days1=g1, days2=g2;
    for (int i = 0; i < 12; i++)
    {
        days1=days1+summ(m1);
        days2=days2+summ(m2);
    }
    days1=days1+sumy(a1);
    days2=days2+sumy(a2);
    if (days1>days2)
        cout << days1-days2 << " giorni" << endl;
    else
        cout << days2-days1 << " giorni" << endl;
}

bool isleap(int x)
{
    if (x%4==0 && x%100!=0)
        return true;
    if (x%400==0)
        return true;
    return false;
}

int summ(int a)
{
    int array[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int x=0;
    for (int i = 0; i < a; i++)
        x=x+array[i];
    return x;
}

int sumy(int x)
{
    int sum=0;
    for (int i = 1582; i < x; i++)
    {
        if (isleap(i)==true)
            sum=sum+366;
        else
            sum=sum+365;
    }
    return sum;
}