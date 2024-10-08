#include <iostream>
using namespace std;

class Employee
{
public:
    Employee()
    {
        cout << "Hello I'm Employee constrictor" << endl;
    }
    ~Employee()
    {
        cout << "Employee Destroyed";
    }
};

class Company
{
public:
    Employee *obj;
    Company(Employee *obj)
    {
        this->obj = obj;
        cout << "This is company" << endl;
    }

    ~Company()
    {
        cout << "Company Destroyed";
    }
};

int main()
{
    Employee *empObj = new Employee;
    Company cmpObj(empObj); // company (parent) destroyed but child not destroyed
    delete empObj;          // we need to destroy employee mannually
}
