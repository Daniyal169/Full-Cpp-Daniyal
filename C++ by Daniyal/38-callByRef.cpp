// Call by Reference  using refrence variable in C++

#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 4, y = 5;

    cout << "The value of x is :" << x << " This value of y is :" << y << endl;
    swap(x, y);
    cout << "The value of x is :" << x << " This value of y is :" << y << endl;

    return 0;
}