#include <iostream>
#include <ctime>

using namespace std;

int rimembra(const int size, int K, int V[]);
void print(int array[], int size);
int get_max(int data[], const int size);
void get_0(int data[], const int size);

int main()
{
    srand(time(0));

    int N,K;

    cout << "inserire N:";
    cin >> N;
    cout << endl << "inserire K:";
    cin >> K;

    int *V = new int[N];
    for (int i = 0; i < N; i++)
        V[i]=rand()%2;

    cout << endl;
    print(V, N);

    cout << rimembra(N, K, V) << endl;

    return 0;
}

int rimembra(const int size, int K, int V[])
{
    int *conta = new int[size];
    get_0(conta, size);
    int buffer = K;
    int savepos;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (V[j] == 0 && buffer !=0 )
            {
                buffer--;
                conta[i]++;
            }
            else if(V[j] == 1)
                conta[i]++;
            else
                j = size;
        }
        buffer = K;
    }

    return get_max(conta, size);
}

void print(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int get_max(int data[], const int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
        if (data[i] > max)
            max = data[i];
    return max;
}

void get_0(int data[], const int size)
{
    for (int i = 0; i < size; i++)
        data[i] = 0;
}