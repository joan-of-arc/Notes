#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    cout << "inserire un numero" << endl;
    cin >> a;
    cout << "inserire un numero" << endl;
    cin >> b;
    cout << "inserire un numero" << endl;
    cin >> c;
    int array[3];
    if (a>=b && a>=c)
    {
        array[0]=a;
        if (b>c)
        {
            array[1]=b;
            array[2]=c;
        }
        else
        {
            array[1]=c;
            array[2]=b;
        }

        for (int i = 0; i < 3; i++)
        {
            cout << array[i];
        }
        exit(0);
    }

    if (b>=c && b>=a)
    {
        array[0]=b;
        if (a>=c)
        {
            array[1]=a;
            array[2]=c;
        }
        else
        {
            array[1]=c;
            array[2]=a;
        }

        for (int i = 0; i < 3; i++)
        {
            cout << array[i];
        }
        exit(0);
    }

    if (c>=a && c>=b)
    {
        array[0]=c;
        if (b>=a)
        {
            array[1]=b;
            array[2]=a;
        }
        else
        {
            array[1]=a;
            array[1]=b;
        }

        for (int i = 0; i < 3; i++)
        {
            cout << array[i];
        }
        exit(0);
    }
}