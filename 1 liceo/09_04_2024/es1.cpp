#include <iostream>
using namespace std;

struct film
{
    char titolo[99]={0};
    char regista[99]={0};
    int anno;
};

int main()
{
    film boh;
    cout << "titolo" << endl;
    cin.get(boh.titolo,99);
    cin.get();
    cout << "regista" << endl;
    cin.get(boh.regista,99);
    cin.get();
    cout << "anno" << endl;
    cin >> boh.anno;
    cout << "titolo:" << boh.titolo << " regista:" << boh.regista << " anno:" << boh.anno << endl;
}