#include <iostream>
#include <ctime>
#include <cstring>
using namespace std;
int main
()
{
    /*int array[10];
    int length=0;
    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
        length++;
    cout << length;

    for (int i = 0; i < length; i++)
    {
        array[i]=rand()%21;
    }
    

    bool x=true;
    while (x==true)
    {
        x==false;
        for (int i = 0; i < length-1; i++)
        {
            if (array[i]>array[i+1])
            {
                swap(array[i],array[i+1]);
                x=true;
            }
        }
    }*/

    char array[11]="ciao mondo";
    int l;
    for (l = 0; array[l] != '\0'; l++);
    cout << l << endl;
}