#include <iostream>
using namespace std;
int main()
{
    char array[] ="ciao mondo";
    int n;
    cout << "inserire n" <<endl;
    cin >> n;
    char temp;
    for (int i = 0, j = 0; i < n; i++)//farò ripetere n volte l'algoritmo che esegue un left shit
    {
        temp=array[0];
        for (j = 0; j < sizeof(array)-2; j++)
        {
            array[j]=array[j+1];
        }
        array[j]=temp;
    }
    cout << array;
}