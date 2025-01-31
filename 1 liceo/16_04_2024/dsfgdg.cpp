#include <iostream>
using namespace std;

struct persona
{
    string nome,cognome;
    int età;
};

int main()
{
    FILE *fp=fopen("file.txt","r");
    persona p[100];
    for(int i=0;!feof(fp);i++)
    {
        fscanf(fp, "%s%s%d", p[i].nome.c_str(), p[i].cognome.c_str(), &p[i].età);
    }
    fclose(fp);
}