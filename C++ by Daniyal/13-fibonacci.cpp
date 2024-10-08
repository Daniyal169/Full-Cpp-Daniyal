// Fibonacci sequence using function

#include <iostream>
using namespace std;

void fib(int num)
{
    int n1 = 0, n2 = 1, n3;

    for (int i = 2; i <= num; i++)
    {
        n3 = n1 + n2;
        cout << n3 << " ";
        n1 = n2;
        n2 = n3;
    }
}

int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    fib(num);

    return 0;
}