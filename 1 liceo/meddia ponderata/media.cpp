#include <iostream>
#include <cstdlib>
using namespace std;

int main(int args, char *arg[])
{
    const int pesi[10]={7, 2, 9, 11, 32, 1, 5, 8, 1, 4};
    int media=(arg[1]*pesi[0]+arg[2]*pesi[1]+arg[3]*pesi[2]+arg[4]*pesi[3]+arg[5]*pesi[4]+arg[6]*pesi[5]+arg[7]*pesi[6]+arg[8]*pesi[7]+arg[9]*pesi[8]+arg[1]*pesi[9])/(pesi[0]+pesi[1]+pesi[2]+pesi[3]+pesi[4]+pesi[5]+pesi[6]+pesi[7]+pesi[8]+pesi[9]);
    cout << media << endl;
}