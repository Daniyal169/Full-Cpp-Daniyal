#include <iostream>
using namespace std;

class Operation
{
    int num1;
    int num2;

public:
    Operation()
    {
        num1 = 10;
        num2 = 10;
    }

    // this is preFix mean we have to write operator before object ++inc
    void operator++()
    {
        num1 += 5;
    }
    void operator--()
    {
        num2 -= 5;
    }

    // this is postFix mean we have to write operator after object inc++
    // in post we have to right dataType in arg
    void operator++(int)
    {
        num1 += 5;
    }
    void operator--(int)
    {
        num2 -= 5;
    }
    void printNum1()
    {
        cout << "The value of num 1 is  :" << num1 << endl;
    }
    void printNum2()
    {
        cout << "The value of num2 is :" << num2 << endl;
    }
};

int main()
{
    Operation Inc;
    ++Inc;
    Inc.printNum1();

    Operation Dec;
    --Dec;
    Dec.printNum2();

    Operation Inc2;
    Inc2++;
    Inc2.printNum1();

    Operation Dec2;
    Dec2++;
    Dec2.printNum1();
}

// This is the example of binnary operator overloading