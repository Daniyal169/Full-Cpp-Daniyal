// Constructotr in C++

#include <iostream>
using namespace std;

class Student
{
    int num;
    int age;

public:
    Student(); // this is our default consturctor
    void displayVal();
};
// calling default consturctor
Student::Student()
{
    num = 20;
    age = 21;
}

void Student::displayVal()
{
    cout << "The fav num of student is " << num << " and the age of student is :" << age << endl;
}

int main()
{
    Student std;
    std.displayVal();
    return 0;
}