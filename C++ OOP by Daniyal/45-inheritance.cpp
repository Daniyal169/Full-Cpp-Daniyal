#include <iostream>
using namespace std;

class Employee
{
private:
    int ID;
    float salary;

public:
    Employee(int id, float s)
    {
        ID = id;
        salary = s;
    }
    void printEmp()
    {
        cout << "ID :" << ID << endl;
        cout << "Salary :" << salary << endl;
    }
};

class Doctor : public Employee
{
private:
    int icuExp;

public:
    Doctor(int exp, int id, int s) : Employee(id, s)
    {
        icuExp = exp;
    }
    void printDoc()
    {
        printEmp();
        cout << "Exp :" << icuExp << endl;
    }
};

int main()
{
    Doctor docOne(2, 101, 2000);
    docOne.printDoc();

    return 0;
}