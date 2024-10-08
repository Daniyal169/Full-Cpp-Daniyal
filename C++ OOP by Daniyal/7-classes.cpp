// Classes, Public and Private access modifiers in C++

#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;

    void getData()
    {
        cout << "The val of a is :" << a << endl;
        cout << "The val of b is :" << b << endl;
        cout << "The val of c is :" << c << endl;
        cout << "The val of d is :" << d << endl;
        cout << "The val of e is :" << e << endl;
    }

    // setter declaration
    void setData(int a, int b, int c);
};

void Employee::setData(int a1, int b1, int c1)
{ // this scopr resolution confirm that setData belongs to employee
    a = a1;
    b = b1;
    c = c1;
}

int main()
{

    Employee Daniyal;
    Daniyal.d = 40;
    Daniyal.e = 50;
    Daniyal.setData(10, 20, 30);
    Daniyal.getData();
}