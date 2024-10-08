#include <iostream>
using namespace std;

class Birthday
{
    int year, month, day;

public:
    void setBirthday(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void getDate()
    {
        cout << day << "/" << month << "/" << year << "/" << endl;
    }
};

class Person
{
    string name;

public:
    Birthday obj;
    Person(string n, int y, int m, int d)
    {
        name = n;
        obj.setBirthday(y, m, d);
    }

    void getInfo()
    {
        cout << "The name is :" << name << endl;
        cout << "Birthday is :";
        obj.getDate();
    }
};

int main()
{
    Person pObj("Daniyal", 2002, 9, 26);
    pObj.getInfo();
}