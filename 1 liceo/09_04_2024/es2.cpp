#include <iostream>
using namespace std;

struct tempo
{
    int h;
    int m;
    int s;
};

int main()
{
    tempo t1,t2;
    t1.h=1;
    t1.m=15;
    t1.s=14;
    t2.h=0;
    t2.m=58;
    t2.s=46;
    t1.s += t2.s;
    while(t1.s>=60)
    {
        t1.s-=60;
        t1.m++;
    }
    t1.m+=t2.m;
    while (t1.m>=60)
    {
        t1.m-=60;
        t1.h++;
    }
    t1.h+=t2.h;
    cout << "h:" << t1.h << " m:" << t1.m << " s:" << t1.s << endl;
}