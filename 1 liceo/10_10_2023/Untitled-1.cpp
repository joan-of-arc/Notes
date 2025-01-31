#include <iostream>
using namespace std;

int main()
{
  int x;
  int y;
  int z;
  cout<<"inserire il primo numero ";
  cin>>x;
  cout<<"inserire il secondo numero ";
  cin>>y;
  cout<<"inserire il terzo numero ";
  cin>>z;
  cout<<"il maggiore dei 3 numeri è ";
  if (x>y&&x>z)
  {
    cout<<x;
  }
  if (y>x&&y>z)
  {
    cout<<y;
  }
  if (z>x&&z>y)
  {
    cout<<z;
  }
  if (x==y&&x==z)
  {
    cout<<x;
  }
  if (x==y&&x>z)
  {
    cout<<x;
  }
   if (z==y&&z>x)
  {
    cout<<z;
  }
    if (x==z&&z>y)
  {
    cout<<z;
  }
}