#include <iostream>
#include <cstring>
using namespace std;

class Student
{
    int *rollNum;
    char *section;

public:
    Student(int, const char *);
    Student(const Student &obj);
    void setVal(int, const char *);
    void dispVal();
};

Student::Student(int rn, const char *sec)
{
    // for rollNum
    rollNum = new int;
    *rollNum = rn;

    // for section
    // allocating memory
    int len = 0;
    while (sec[len] != '\0')
    {
        len++;
    }
    section = new char[len + 1];
    // copying values
    int i = 0;
    while (sec[i] != '\0')
    {
        section[i] = sec[i];
        i++;
    }
}

Student::Student(const Student &obj)
{
    rollNum = obj.rollNum; // Shallow copy for rollNum
    section = obj.section; // Shallow copy for section
}

void Student::setVal(int rn, const char *sec)
{
    *rollNum = rn;
    delete[] section;
    // for section
    // allocating memory
    int len = 0;
    while (sec[len] != '\0')
    {
        len++;
    }
    section = new char[len + 1];
    // copying values
    int i = 0;
    while (sec[i] != '\0')
    {
        section[i] = sec[i];
        i++;
    }
}

void Student::dispVal()
{
    cout << "[ " << "Roll Num :" << *rollNum << " Section :" << *section << " ] " << endl;
}

int main()
{
    Student StudentOne(179, "A");
    StudentOne.dispVal();

    Student StudentTwo(StudentOne); // Shallow copy made here
    StudentTwo.dispVal();

    StudentOne.setVal(69, "D");
    StudentOne.dispVal();

    StudentTwo.dispVal();

    return 0;
}