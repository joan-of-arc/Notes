#include <iostream>
using namespace std;

void concat(int destination[], int source[], int n, int length);
void sort(int array[], int length);

int main()
{
    int array1[]={0,2,3,7,8};
    int array2[]={1,4,5,9,12};
    int arrayf[10];
    concat(arrayf, array1, 0, sizeof(array1)/sizeof(int));
    concat(arrayf, array2, 5, sizeof(array2)/sizeof(int));
    sort(arrayf, sizeof(arrayf)/sizeof(int));
}

void concat(int destination[], int source[], int n, int length)
{
    for (int i=0; n < length; n++, i++)
        destination[n]=source[i];
}

void sort(int array[], int length)
{
    for (int i = 0; i < length; i++)
        for (int k = 0; k < length; k++)
            if (array[k]>array[k+1])
                swap(array[k],array[k+1]);
}