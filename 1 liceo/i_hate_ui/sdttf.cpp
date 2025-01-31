#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include <iomanip>
#include <cmath>
#include <windows.h>
#include <conio.h>
#include <stdexcept>
#define db_size 1000
#define size 20

using namespace std;

struct persona
{
    char nome[size];
    char cognome[size];
    char cf[size];
};

struct prenotazione
{
    persona p;
    int id;
    char data[size];
    char ora[size];
};

int lastid(char file[]);
int length(prenotazione a);
int last(char file[]);//n di prenotazione effettive, da usare se delle prenotazione vengono rimosse e quindi bisogna slittare gli id
void prenota(char file[]);
void print(char file[]);
void search(char file[]);
int pos(int id, char file[]);
bool remove(int id, char file[]);
void modifica(char file[]);
void menu();

int main()
{
    //fseek(fp, 0*sizeof(prenotazione), SEEK_SET); mette il cursore a distanza 0 dall'inizio
    menu();
    return 0;
}

void menu()
{
    char file[]="database";
    bool menu=false;
    while(!menu)
    {
        cout << "sistema di prenotazioni" << endl << "1.prenota" << endl;
        cout << "2.stampa" << endl;
        cout << "3.modifica" << endl;
        cout << "4.cerca" << endl;
        cout << "5.rimuovi prenotazione" << endl;
        cout << "6.esci" << endl;
        cout << "scelta: ";
        int n;
        cin>>n;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100000, '\n');
            n=0;
        }
        switch (n)
        {
            case 1:
                menu=true;
                system("cls");
                prenota(file);
                break;
            case 2:
                menu=true;
                system("cls");
                print(file);
                break;
            case 3:
                menu=true;
                system("cls");
                cout << 3 << endl;
                break;
            case 4:
                menu=true;
                system("cls");
                search(file);
                break;
            case 5:
                menu=true;
                system("cls");
                cout << 5 << endl;
                break;
            case 6:
                menu=true;
                system("cls");
                return;
                break;
            default:
                system("cls");
                cout << "scelta errata, premi un tasto per continuare..." << endl;
                getch();
                system("cls");
                break;
        }
    }
}

void print(char file[])
{
    FILE *fp=fopen(file, "rb");
    prenotazione p[db_size];
    for (int i = 1; i <= lastid(file); i++)
    {
        if(fread(p, sizeof(prenotazione), i, fp))
            cout << p[0].id << " " << p[0].p.nome << " " << p[0].p.cognome << " " << p[0].p.cf << " " << p[0].data << " " << p[0].ora << endl;
    }
    fclose(fp);
    cout << "premi un tasto per continuare..." << endl;
    getch();
    system("cls");
    menu();
}

int lastid(char file[])
{
    FILE *fp=fopen(file, "rb");
    prenotazione p[db_size];//idk
    int id=0;
    while (fread(p, sizeof(prenotazione), id+1, fp))
        id++;
    fclose(fp);
    return id;
}

void prenota(char file[])
{
    FILE *fp=fopen(file,"ab");
    prenotazione p;
    cout << "nome: ";
    cin >> p.p.nome;
    cout << "cognome: ";
    cin >> p.p.cognome;
    cout <<  "codice fiscale: ";
    cin >> p.p.cf;
    cout <<  "data: ";
    cin >> p.data;
    cout <<  "ora: ";
    cin >> p.ora;
    p.id=lastid(file)+1;
    fwrite(&p, sizeof(prenotazione), p.id, fp);
    fclose(fp);
    cout << "premi un tasto per continuare..." << endl;
    getch();
    system("cls");
    menu();
}

void search(char file[])
{
    cout << lastid(file);
    FILE *fp=fopen(file,"rb");
    int id;
    cout << "inserire numero prenotazione: ";
    cin >> id;
    prenotazione p;
    for (int i = 0; i < id; i++)
    {
        fread(&p, sizeof(prenotazione), 1, fp);
        if (p.id==id)
            break;
    }
    cout << p.id << " " << p.p.nome << " " << p.p.cognome << " " << p.p.cf << " " << p.data << " " << p.ora << endl;
    fclose(fp);
    cout << "premi un tasto per continuare..." << endl;
    getch();
    system("cls");
    menu();
}