#include <string>
using namespace std;
void inversion(string &ciao);

void inversion(string &ciao)
{
    string output;
    for (int i = 0; i < ciao.length(); i++)
        output[i]=ciao[i];
    for (int i = 0; i < ciao.length(); i++)
        ciao[i]=output[ciao.length()-1-i];
    ciao[ciao.length()]='\0';
}