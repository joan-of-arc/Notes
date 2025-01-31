#include <iostream>
#include <cstdlib>
#include <stdexcept>
using namespace std;

int main()
{
    try
    {
        int n;
        int m=-1;
        int count=0;
        while (count <100)
        {
            cout << "inserire numero";
            if (!(cin >> n))
            {
                throw "invalid argument";
            }
            if (m>n)
            {
                cout << n << " non è maggiore di " << m << endl;
                exit(0);
            }
            m=n;
            cout++;
        }
    }
    catch(invalid_argument & e)
    {
        cout  << e.what() << endl;
    }
}