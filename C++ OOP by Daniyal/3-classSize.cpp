#include <iostream>

using namespace std;

class student
{
private:
    int ID;

public:
    char grade;

    int getID()
    {
        return ID;
    }

    void setID(int id)
    {
        ID = id;
    }
};

int main()
{

    student studentDetail;

    studentDetail.setID(179);
    studentDetail.getID();
    studentDetail.grade = 'A';

    cout << studentDetail.getID() << endl;
    cout << studentDetail.grade << endl;

    cout << "The size of object is :" << sizeof(studentDetail);

    // this is having size 8 bcz
    /*
     The memory alignment, the compiler might add extra padding to ensure that each member variable is aligned properly in memory. This padding is often added to make memory access more efficient for the CPU.

        For example, if your system's memory alignment requirement is 4 bytes (common on many systems), the compilermight add 3  bytes of padding after the char grade; variable to ensure that the next member (int ID;) starts at a memory address that   is a multiple of 4.
    */
}