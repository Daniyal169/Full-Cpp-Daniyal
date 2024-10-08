#include <iostream>
using namespace std;

class complexNum;

class calculator
{
public:
    int sumRealComplex(complexNum, complexNum);
    int sumImgComplex(complexNum, complexNum);
};

class complexNum
{
    int num1, num2;

    // individually making each func friend
    // friend int calculator ::sumRealComplex(complexNum,complexNum);
    // friend int calculator ::sumImgComplex(complexNum,complexNum);

    // declaring entire class as function
    friend class calculator;

public:
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

int calculator::sumRealComplex(complexNum c1, complexNum c2)
{
    return (c1.num1 + c2.num1);
}
int calculator::sumImgComplex(complexNum c1, complexNum c2)
{
    return (c1.num2 + c2.num2);
}

int main()
{
    complexNum com1, com2;
    com1.setNum(10, 20);
    com2.setNum(30, 40);

    calculator calc;
    int real = calc.sumRealComplex(com1, com2);
    int img = calc.sumImgComplex(com1, com2);

    cout << "The sum of real part is :" << real << endl;
    cout << "The sum of imaginary part is :" << img << endl;

    return 0;
}