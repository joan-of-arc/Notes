#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#define size 6
using namespace std;

struct dado
{
    dado()
    {
        for (int i = 0; i < size; i++)
            facce[i]=i+1;
    }
    int facce[size];
};

struct partita
{
    dado d[2];
    long long lanci;
};

int launch(dado d);
void save(string file, partita p);

int launch(dado d)
{
    return d.facce[rand()%6];
}

void save(string file, partita p)
{
    int n1,n2;
    time_t now=time(0);//orario di adesso
    char *date=ctime(&now);//converte la data in stringa
    FILE *fp=fopen(file.c_str(),"a");
    fprintf(fp, "%s",date);
    for (int i = 0; i < p.lanci; i++)
    {
        n1=launch(p.d[0]);
        n2=launch(p.d[1]);
        if (n1>n2)
        {
            fprintf(fp, "%s%d%s%s%d%s", "d1: ", n1, "  vince d1\n", "d2: ", n2, "\n");
        }
        else if(n1<n2)
        {
            fprintf(fp, "%s%d%s%s%d%s", "d1: ", n1, "\n", "d2: ", n2, "  vince d2\n");
        }
        else
        {
            fprintf(fp, "%s%d%s%s%d%s", "d1: ", n1, "  pareggio\n", "d2: ", n2, "  pareggio\n");
        }
        fprintf(fp,"%s","\n");
    }
    fclose(fp);   
}

int main()
{
    srand(time(0));
    partita p;
    p.lanci=70000000000;
    save("log.txt", p);
}