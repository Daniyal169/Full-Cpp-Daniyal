#include <iostream>
using namespace std;

class Marks
{
    int num1;
    int num2;

public:
    Marks()
    {
        num1 = 0;
        num2 = 0;
    }

    Marks(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void printVal()
    {
        cout << "The value of num1 is :" << num1 << endl;
        cout << "The value of num2 is :" << num2 << endl;
        cout << endl;
    }

    Marks operator+(Marks obj)
    {
        Marks temp;
        temp.num1 = num1 + obj.num1;
        temp.num2 = num2 + obj.num2;
        return temp;
    }
};

int main()
{

    Marks m1(10, 20);
    Marks m2(30, 40);

    // m1.printVal();
    // m2.printVal();

    Marks m3;
    m3 = m1 + m2;
    m3.printVal();
}

// When you use the + operator like m1 + m2, m1 is treated as the current object, and its member variables num1 and num2 are accessed using the this pointer. Similarly, when you use m2, it is treated as the object passed as an argument (obj), and its member variables num1 and num2 are accessed within the overloaded function.