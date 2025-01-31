#include <iostream>
using namespace std;
int main()
{
    int sus[5]={5,2,65,2,6};
    bool x=true;
    while(x == true)
    {
        x=false;
        for (int i = 0; i < sizeof(sus)/sizeof(int)-1; i++)
            if (sus[i] > sus[i+1])
            {
                swap(sus[i],sus[i+1]);
                x=true;
            }
    }
}