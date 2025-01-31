#include <string>
#include <iostream>
using namespace std;

void thefunction(string str);

void thefunction(string str)
{
    int cut;
    int array[str.length()]={0};
    for (int i = 0; i < str.length(); i++)
    {
        cut = str.find('s');
        str = str.substr(cut+1, str.length());
        if (str.find('s')==0)
            i=str.length();
        array[i]=cut; 
    }
    for (int i = 0; i < str.length(); i++)
        if (array[i]!=0)
            cout << array[i] << " ";
}