#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct dati
{
    int a,b,c,d;
    char flag;
    char array[100];
    int indirizzoIP[4];
};

int main()
{
    FILE *fp=fopen("fg.txt","w");
    fprintf(fp,"%d%s",4,"banana");
    fclose(fp);

    FILE *fp=fopen("fg.txt","r");
    int n;
    string d;
    fscanf(fp, "%d%s", &n, &d);
    fclose(fp);

    FILE *fp=fopen("fg.txt","wb");
    int a;
    fwrite(&a, sizeof(int), 1, fp);
    fclose(fp);

    FILE *fp=fopen("fg.txt","rb");
    dati k;
    fread(&k, sizeof(dati), 1, fp);
    fclose(fp);


    dati m,n;
    memcpy(&m, &n, sizeof(dati));
    string thi;
    char d;
    
}