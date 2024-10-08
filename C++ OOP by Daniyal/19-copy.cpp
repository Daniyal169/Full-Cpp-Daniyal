#include <iostream>
using namespace std;

class Student
{
    int *rollNum;
    char *section;

    public:
    Student(int ,char);
    Student (Student &obj);
    void setVal(int,char);
    void dispVal();
};

Student::Student(int rn,char sec){
    rollNum=new int;
    section=new char;

    *rollNum=rn;
    *section=sec;
}

Student::Student(Student &obj){
    rollNum=new int;
    section=new char;

    *rollNum=*(obj.rollNum);
    *section=*(obj.section);
}

void Student::setVal(int rn,char sec){
    *rollNum=rn;
    *section=sec;
}

void Student::dispVal(){
    cout<<"[ "<<"Roll Num :"<<*rollNum<<" Section :"<<*section<<" ] "<<endl;
}

int main(){

    Student StudentOne(179,'A');
    StudentOne.dispVal();

    Student StudentTwo(StudentOne);
    StudentTwo.dispVal();

    StudentOne.setVal(69,'D');
    StudentOne.dispVal();
    
    StudentTwo.dispVal();

}