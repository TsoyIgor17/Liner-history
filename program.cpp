#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 2 || n == 3)
        return (n - 1);
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << "Hello, World!" << endl;
    cout << fib(10) << endl;
    return 0;
}