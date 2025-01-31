#include <iostream>
using namespace std;
int main()
{
    int array[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "immettere un numero compreso tra 2 e 10" << endl;
        cin >> array[i];
        while (array[i]<2 || array[i]>10)
        {
            cout << "numero non compreso tra 2 e 10, riimmettere" << endl;
            cin >> array[i];
        }
    }
}