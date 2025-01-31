#include <iostream>
using namespace std;
void sort_int(int tosort[], int length);

int main()
{
    int n;
    cout << "inserire n" << endl;
    cin >> n;
    int garden[n];
    for (int i = 0; i < n; i++)
    {
        cout << "inserire bellezza del tulipano" << endl;
        cin >> garden[i];
    }
    int bouquet[n-1];
    int bouquet2;
    if (garden[0] > garden[n-1])
    {
        bouquet2=garden[0];
        for (int i = 1; i < n; i++)
            bouquet[i-1]=garden[i];
        sort_int(bouquet, n-1);
        cout << bouquet2+bouquet[0] << endl;
    }
    else
    {
        bouquet2=garden[n-1];
        for (int i = 0; i < n-1; i++)
            bouquet[i]=garden[i];
        sort_int(bouquet, n-1);
        cout << garden[n-1]+bouquet[0] << endl;
    }
}

void sort_int(int tosort[], int length)
{
    bool x=true;
    while(x == true)
    {
        x=false;
        for (int i = 0; i < length-1; i++)
            if (tosort[i] > tosort[i+1])
            {
                swap(tosort[i],tosort[i+1]);
                x=true;
            }
    }
}