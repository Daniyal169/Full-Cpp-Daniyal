#include <iostream>
using namespace std;

class Instructor
{
    string name;
    int phoneNum;

public:
    void setInst(string n, int pn)
    {
        name = n,
        phoneNum = pn;
    }

    void getInst()
    {
        cout << "Name :" << name << endl;
        cout << "Phone Num :" << phoneNum << endl;
    }
};

class Book
{
    string title;
    int ID;

public:
    void setBook(string t, int id)
    {
        title = t,
        ID = id;
    }

    void getBook()
    {
        cout << "Title of book is  :" << title << endl;
        cout << "ID of book is :" << ID << endl;
    }
};

class Course
{
    Instructor instObj;
    Book bookObj;

public:
    Course(string n, int pn, string t, int id)
    {
        instObj.setInst(n, pn);
        bookObj.setBook(t, id);
    }

    void getInfo()
    {
        instObj.getInst();
        bookObj.getBook();
    }
};
int main()
{

    Course cObj("Babar Azam", 158196, "Batting", 56);
    cObj.getInfo();

    return 0;
}