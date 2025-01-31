#include <iostream>
using namespace std;
int main()
{
    const int size = 1000;
    char text1[size]={0};
    char text2[size]={0};
    cout << "inserire la prima frase" << endl;
    cin.get(text1, size);
    cout << "inserire la seconda frase" << endl;
    cin.get();
    cin.get(text2,size);
    cin.get();
    char garuda[2*size+2]={0};
    int n;
    cout << "inserire n" << endl;
    cin >> n;
    int i=0;
    int k=0;
    for (; k < n; i++,k++)
        garuda[i]=text1[i];
    if (text2[0]!=char(32) && garuda[i-1]!=char(32) && garuda[i-2]!=char(32))
    {
        garuda[i]=char(32);
        i++;
    }
    for (int j=0; text2[j] != '\0'; i++,j++)
        garuda[i]=text2[j];
    if (text1[k]!=char(32) && garuda[i-1]!=char(32) && garuda[i-2]!=char(32))
    {
        garuda[i]=char(32);
        i++;
    }
    for (; text1[k] != '\0'; i++,k++)
        garuda[i]=text1[k];
    cout << garuda << endl;  
}