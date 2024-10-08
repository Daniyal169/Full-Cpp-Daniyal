// pointer to derived class

#include <iostream>
using namespace std;

class Human
{
public:
    int age;

    void setVal(int a)
    {
        age = a;
    }
    void getVal()
    {
        cout << "Age is :" << age << endl;
    }
};

class Crickter : public Human
{
public:
    int runs;

    void setVal(int r)
    {
        runs = r;
    }
    void getVal()
    {
        cout << "Runs is :" << runs << endl;
    }
};

int main()
{
    Human *humPtr;
    Crickter cricObj;

    // we create pointer of base class points to object of derived class but when we call setval and getval it will call the member function of base class not derived :: agr derived ka krna hai tou base waly ko virtual bnana pryga

    humPtr = &cricObj;
    humPtr->setVal(5);
    humPtr->getVal();

    Crickter *cricPtr;

    cricPtr = &cricObj;
    cricPtr->setVal(56);
    cricPtr->getVal();
}