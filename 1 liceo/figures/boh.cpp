#include <iostream>

using namespace std;
bool isFullAppear(int A[]);
void valorizza(int A[]);

// mi dice se in un array non ci sono -1
bool isFullAppear(int A[])
{
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == -1)
            return false;
    }
    return true;
}
//riempie un array con tutti -1
void valorizza(int A[])
{
    for (int i = 0; i < 10; i++)
    {
        A[i] = -1;
    }
}
int main()
{
    int N;
    cin >> N;
    int K[N];
    int A[10];
    valorizza(A);
    for (int i = 0; i < N; i++)
    {
        cin >> K[i];

        int conta = 0;
        int n = K[i];
        while (!isFullAppear(A))
        {
            while (n != 0)
            {
                A[n % 10] = n % 10;
                n /= 10;
            }
            conta++;
            n = K[i] * (conta + 1);
        }
        cout << conta << endl;
        valorizza(A);
    }
    return 0;
}