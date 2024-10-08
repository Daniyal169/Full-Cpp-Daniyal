#include <iostream>
using namespace std;

class Employee
{
public:
    int ID;
    float salary;

    void setID(int id)
    {
        ID = id;
    }
    void setSalary(int s)
    {
        salary = s;
    }

    int getID()
    {
        return ID;
    }
    float getSalary()
    {
        return salary;
    }
};

class Doctor : public Employee
{
public:
    int icuExp;
    void setExp(int exp)
    {
        icuExp = exp;
    }

    int getExp()
    {
        return icuExp;
    }
};

int main()
{
    Doctor docOne;
    docOne.setID(01);
    cout << docOne.getID() << endl;
    docOne.setSalary(100);
    cout << docOne.getSalary() << endl;

    docOne.setExp(5);
    cout << docOne.getExp() << endl;

    return 0;
}