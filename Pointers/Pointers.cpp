#include <iostream>
using namespace std;

const int SIZE=10;

void Val(int *array, int n);//valorize an pointer array with n numbers

int main()
{
    //normal kind of variable and interactions
    int a=5;
    cout << a << endl;
    a=a+7;
    if (a==12)
        cout << "a value is: " << a << endl;

    //pointer kind of variable and interations
    int *b;//declaration of a pointer
    int *b=new int(8);//declaration of a pointer and assigning of a value

    //inside b there isn't the value 8 but the address of where the 8 is stored

    cout << b << endl; //it doesnt print the number but the address of the number 
    cout << *b << endl; //it prints 8

    int *array=new int[SIZE];//declaration of an array of SIZE elements

    *(array+8);//it's the same thing as array[8]
    *(array+1)=32;//it's the same thing as array[1]=32

    return 0;
}

void Val(int *array, int n)
{
    for (int i = 0; i < n; i++)
        array[i] = i + 1;//same thing as *(array+i)=i+1;
}