#include <iostream>
using namespace std;

class complexNum
{
    int num1, num2;

public:
    // sumComplex is not the member function of this class it is just a dec for this fun that it can access private var of this class
    friend complexNum sumComplex(complexNum, complexNum);
    void setNum(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void printNum()
    {
        cout << "The number is :" << num1 << " + " << num2 << "i" << endl;
    }
};

complexNum sumComplex(complexNum c1, complexNum c2)
{
    complexNum c3;
    c3.setNum((c1.num1 + c2.num1), (c1.num2 + c2.num2));
    return c3;
}

int main()
{
    complexNum com1, com2, sum;

    com1.setNum(2, 4);
    com1.printNum();

    com2.setNum(4, 8);
    com2.printNum();

    sum = sumComplex(com1, com2);
    sum.printNum();
}