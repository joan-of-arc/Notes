#include <string>
#define SIZE 100
using namespace std;

struct punto
{
	float x,y;
};

struct piano
{
	punto p[SIZE];
};

void assign(piano ciao);

void assign(piano ciao)
{
    punto a;
    for (int i = 0; i < SIZE; i++)
    {
        a.x=rand();
        a.y=rand();
        ciao.p[i]=a;
    }
}