#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char array1[]="ciao ";
    char array2[]="mondo234534634567234567245723452345713245713547";
    memcpy(array1,array2,sizeof(char)*5);
}