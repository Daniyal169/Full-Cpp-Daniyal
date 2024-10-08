// POINTERS

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *b;
    b = &a;

    // Address of
    cout << "The address of a is :" << &a << endl;
    cout << "The address of a is :" << b << endl;

    // Dereferencing
    cout << "The value of a is :" << *b << endl;

    // changing the value of a by pointer
    *b = 169;
    cout << "We changed value of a by pointer :" << a << endl;

    // Pointer to Pointer
    int **c = &b;

    cout << "The address of b :" << &b << endl;
    cout << "The address of b :" << c << endl;

    cout << "The value of b is :" << **c << endl;
}
