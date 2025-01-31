#include <iostream>
#include <string>
using namespace std;

int main()
{
    FILE *fp=fopen("log.txt","r");
    bool isvince=false;
    int d1=0,d2=0;
    string a;
    for (int i = 0; i < 700; i++)
    {
        if (isvince)
        {
            fscanf(fp,"%s",a.c_str());
            if (a=="d1")
                d1++;
            if (a=="d2")
                d2++;
            isvince=false;
        }
        else
        {
            fscanf(fp,"%s",&a);
            if (a=="vince")
                isvince=true;
        }
    }
    if (d1>d2)
        cout << d1 << endl;
    else if (d2>d1)
        cout << d2 << endl;
    else if (d1==d2)
        cout << "pareggio" << endl;
}