#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int result = factorial(num);
    cout << "Factorial of " << num << " is " << result << std::endl;
    return 0;
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}