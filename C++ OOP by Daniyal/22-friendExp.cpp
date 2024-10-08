#include <iostream>
using namespace std;

class Y;

class X
{
    int num1;

public:
    void setVal(int n)
    {
        num1 = n;
    }
    friend void add(X, Y);
};
class Y
{
    int num2;

public:
    void setVal(int n)
    {
        num2 = n;
    }

    friend void add(X, Y);
};

void add(X n1, Y n2)
{
    cout << "The sum of both classes is :" << n1.num1 + n2.num2 << endl;
}

int main()
{

    X n1;
    Y n2;
    n1.setVal(20);
    n2.setVal(26);

    add(n1, n2);
}