#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() // Declare speak as a virtual function
    {
        cout << "Animal is speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak() override // Override the base class function
    {
        cout << "Dog is speaking" << endl;
    }
};

int main()
{
    /*
    Animal animalPtr;
    Dog dogOne;
    animalPtr = dogOne;   // Object slicing occurs here

    animalPtr.speak();   // Calls Animal's speak function

    Object slicing occurs when you assign an object of a derived class to an object of a base class. In such a scenario, the derived class's extra members and methods are "sliced off," and only the base class portion of the object is copied.
*/

    Animal *animalPtr;
    Dog dogOne;
    animalPtr = &dogOne;

    // Calls Dog's speak function because of runtime polymorphism
    animalPtr->speak();

    return 0;
}

// Rules of virtual function
// 1- They cannot be static
// 2- Only accessed by object pointers
// 3- Can be friend of other class
// 4- Virtual function cannot be used in base class
