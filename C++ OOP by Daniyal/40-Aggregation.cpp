#include <iostream>
#include <string>

using namespace std;

class Address
{
public:
    string street;
    string city;
    string state;
    string zip;

    Address(string s, string c, string st, string z)
    {
        street = s;
        city = c;
        state = st;
        zip = z;
    }
};

class Employee // aggregate class
{
private:
    string name;
    Address *address; // component class

public:
    Employee(string n, Address *a)
    {
        name = n;
        address = a;
    }

    void display()
    {
        cout << "Employee: " << name << "\n";
        cout << "Address: " << address->street << ", " << address->city << ", " << address->state << ", " << address->zip << "\n";
    }
};

int main()
{
    Address *add1 = new Address("C-146", "Sec-15", "Noida", "UP");
    Address *add2 = new Address("B-123", "New Delhi", "Delhi", "DL");

    Employee emp1("Nakul", add1);
    Employee emp2("John", add2);

    emp1.display();
    emp2.display();

    delete add1;
    delete add2;

    return 0;
}

// Aggregation is a "has-a" relationship, where one class (the aggregate class) contains a reference or pointer to an object of another class (the component class). The component class can exist independently of the aggregate class, and it can be shared by multiple aggregate classes. In other words, the lifetime of the component class is not controlled by the aggregate class.