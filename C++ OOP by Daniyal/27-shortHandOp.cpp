#include <iostream>
using namespace std;

class Marks
{
    int num;

public:
    Marks()
    {
        num = 0;
    }

    Marks(int n)
    {
        num = n;
    }

    void printVal()
    {
        cout << "The num is :" << num << endl;
    }

    // increaing marks takes marks we want to increase.
    void operator+=(int incNum)
    {
        num += incNum;
    }

    // declaring friend opertaor overloading it must take obj
    friend void operator-=(Marks &obj, int decMark);
};

void operator-=(Marks &obj, int decMark)
{
    obj.num -= decMark;
}

int main()
{

    Marks m1(10);
    m1.printVal();

    m1 += 5;
    m1.printVal();

    m1 -= 5;
    m1.printVal();

    return 0;
}