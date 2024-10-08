#include <iostream>
using namespace std;

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 2;
    int b = 4;

    // swap(a,b)
    //--This is wrong bcz we pass value in func not variable todo this we can pass refrence of variable in fun if we dont want to pass value

    swap(&a, &b);
    cout << a << "  " << b << endl;
}