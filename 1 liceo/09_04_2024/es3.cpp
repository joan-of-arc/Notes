#include <iostream>
#include <string>
using namespace std;

struct studente
{
    string nome;
    int età;
    float voto;
};

int main()
{
    studente s1,s2,s3;
    s1.nome="martina";
    s2.nome="giovanni";
    s3.nome="paolo";
    s1.età=16;
    s2.età=16;
    s3.età=17;
    s1.voto=-2;
    s2.voto=15;
    s3.voto=7,75;
    cout << "media:" << (s1.voto+s2.voto+s3.voto)/3 << endl;
}