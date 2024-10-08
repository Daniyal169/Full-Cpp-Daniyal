#include <iostream>
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

    // for rollNUm
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
    section[i] = '\0';
}

Student::Student(const Student &obj)
{
    rollNum = new int;
    *rollNum = *(obj.rollNum);

    // for section
    // allocating memory
    int len = 0;
    while (obj.section[len] != '\0')
    {
        len++;
    }
    section = new char[len + 1];

    // copying values
    int i = 0;
    while (obj.section[i] != '\0')
    {
        section[i] = obj.section[i];
        i++;
    }
    section[i] = '\0';
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
    section[i] = '\0';
}

void Student::dispVal()
{
    cout << "[ " << "Roll Num :" << *rollNum << " Section :" << section << " ] " << endl;
}

int main()
{

    Student StudentOne(179, "ABC");
    StudentOne.dispVal();

    Student StudentTwo(StudentOne);
    StudentTwo.dispVal();

    StudentOne.setVal(69, "DES");
    StudentOne.dispVal();

    StudentTwo.dispVal();
}