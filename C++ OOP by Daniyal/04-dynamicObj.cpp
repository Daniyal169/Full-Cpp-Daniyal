// DYNAMICALLY CREATING OBJECTS

#include <iostream>
using namespace std;

class CGPA
{
private:
    int marks;
    int creditHours;

public:
    // getter functions
    int getMarks()
    {
        return marks;
    }

    int getCr()
    {
        return creditHours;
    }

    // setter function

    void setMarks(int m)
    {
        marks = m;
    }

    void setCr(int cr)
    {
        creditHours = cr;
    }
};

int main()
{

    CGPA *studentResult = new CGPA;
    studentResult->setMarks(56);
    studentResult->setCr(3);

    cout << "Total marks of student is :" << (*studentResult).getMarks() << endl;
    cout << "Credit Hours :" << (*studentResult).getCr() << endl;

    // also by this ->
    cout << "Total marks of student is :" << studentResult->getMarks() << endl;
    cout << "Credit Hours  :" << studentResult->getCr() << endl;
}