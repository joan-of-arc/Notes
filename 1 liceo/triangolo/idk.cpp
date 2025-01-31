
#include<iostream>
#include<cmath>
using namespace std;

struct punto
{
    float x,y;
};

struct retta
{
    float m;
    float q;

};

float AreaTriangolo(punto A, punto B, punto C);
retta PerDuePunti(punto A, punto B);

float AreaTriangolo(punto A, punto B, punto C)
{
    float distanzaAB=sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
    retta r=PerDuePunti(A,B);
    float distanzaCr=abs(r.m*C.x-C.y+r.q)/(sqrt(r.m*r.m+1));
    float Area=distanzaAB*distanzaCr/2;
    return Area;
}

retta PerDuePunti(punto A, punto B)
{

    retta r;
    r.m=(A.y-B.y)/(A.x-B.x);
    r.q=B.y-r.m*B.x;
    return r;
}

int main()
{
    punto A,B,C;
    A={0,0};
    B={10,0};
    C={5,20};
    retta r=PerDuePunti(A,B);
    cout<<"y= "<<r.m<<"x + "<<r.q<<endl;
    float Area=AreaTriangolo(A,B,C);
    cout<<"Area="<<Area<<endl;
    return 0;
}