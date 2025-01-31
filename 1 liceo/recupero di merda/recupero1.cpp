#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    const int SIZE=10;
    int array[SIZE];
    srand(time(0));
    for (int i = 0; i < SIZE; i++)
    {
        array[i]=rand();
    }
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i]%2==0)
        {
            array[i]=array[i]*2;
        } 
    }
}