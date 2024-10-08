// Getter and Setter
// in this age is private

#include <iostream>

using namespace std;

class Patient
{
    private:
    int age;

    public:
    int roomNum;
    int ID;

    // getter function
    int getAge(){
        return age;
    }

    // setter function
    void setAge(int a){
        age=a;
    }

};

int main(){

    Patient patientDetail;
    patientDetail.setAge(20);
    patientDetail.roomNum=56;
    patientDetail.ID=9;

    cout<<"The age of patient is :"<< patientDetail.getAge()<<endl;
    cout<<"The romm num of patient is :"<< patientDetail.roomNum<<endl;
    cout<<"The  patient ID is :"<< patientDetail.ID<<endl;

}