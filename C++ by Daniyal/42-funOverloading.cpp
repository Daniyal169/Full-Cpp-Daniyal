// Function overloading

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    cout << "Function with 2 arguments" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Function with 3 argumnets" << endl;
    return a + b + c;
}
int main()
{

    cout << "Sum of 10 and 5 is " << sum(10, 5) << endl;
    cout << "Sum of 10,6 and 5 is " << sum(10, 6, 5) << endl;
}