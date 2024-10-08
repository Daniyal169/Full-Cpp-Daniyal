// Run Time Polymorphism

#include <iostream>
using namespace std;

class Animal
{
public:
    void speak()
    {
        cout << "Animal is speaking";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Dog is speaking ";
    }
};

int main()
{
    Dog dogOne;
    dogOne.speak();
}