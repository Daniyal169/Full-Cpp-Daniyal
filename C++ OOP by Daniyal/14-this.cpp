#include <iostream>
using namespace std;

class Patient
{
    int age;
    double bill;

    public:
    Patient(int,double);
    void setVal(int ,double);
    void getVal();
};

Patient::Patient(int x,double y ){
    age=x;
    bill=y;
}

void Patient::setVal(int age ,double bill){
    this -> age=age;
    cout<<"The address of this is "<<this<<endl;
    this -> bill=bill;
}
void Patient::getVal(){
 cout<<"The age of patient is :"<<age<<endl;
 cout<<"The total bill of patient is :"<<bill<<endl;
}

int main(){

    Patient patientDetail(0,0);
    cout<<"The address of patientDetail is  "<<&patientDetail<<endl;
    int age=50;
    double bill=3999;

    patientDetail.setVal(age,bill);
    patientDetail.getVal();
    
}