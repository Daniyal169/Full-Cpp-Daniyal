#include <iostream>
using namespace std;

class Human
{
public:
    int age;
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }
};

class Doctor : public Human
{
public:
    Doctor()
    {
        cout << "Hello Im a Doctor";
    }
};

class Teacher : public Human
{
public:
    Teacher()
    {
        cout << "Hello Im a Teacher";
    }
};

int main()
{
    Doctor docOne;
    docOne.setAge(21);
    Teacher teachOne;
    teachOne.setAge(20);

    cout << docOne.getAge() << endl;
    cout << teachOne.getAge() << endl;
}