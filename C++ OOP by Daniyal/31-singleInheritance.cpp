// Single Inheritance example

#include <iostream>
using namespace std;

class Animal
{
public:
    int legs;
    int eyes;

    Animal()
    {
        cout << "Animal constructor" << endl;
    }

    void setLegs(int l)
    {
        legs = l;
    }
    int getLegs()
    {
        return legs;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog constructor" << endl;
    }
    void setEyes(int e)
    {
        eyes = e;
    }
    int getEyes()
    {
        return eyes;
    }
};

int main()
{
    Dog dogOne;
    dogOne.setLegs(4);
    cout << dogOne.getLegs() << endl;
    dogOne.setEyes(2);
    cout << dogOne.getEyes() << endl;
}