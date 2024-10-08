// Composition: Employee class owns an Address object

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
    Address() {};
    Address(string s, string c, string st, string z)
    {
        street = s;
        city = c;
        state = st;
        zip = z;
    }
};

class Employee // composite class
{
private:
    string name;
    Address address; // component class

public:
    Employee(string n, string street, string city, string state, string zip)
    {
        name = n;
        address = Address(street, city, state, zip);
    }

    void display()
    {
        cout << "Employee: " << name << "\n";
        cout << "Address: " << address.street << ", " << address.city << ", " << address.state << ", " << address.zip << "\n";
    }
};

int main()
{
    Employee emp("Daniyal", "A4", "Lahore", "Pakistan", "42");
    emp.display();
    return 0;
}

// Composition is a "part-of" relationship, where one class(the composite class) contains an object of another class(the component class) as a member.The component class cannot exist independently of the composite class, and its lifetime is controlled by the composite class.