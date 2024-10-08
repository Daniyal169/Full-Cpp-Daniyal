// Constructor in C++

#include <iostream>
using namespace std;

class CGPA
{
    private:
    int marks;
    int creditHours;

  

   public:
    // getter functions
    int getMarks(){
        return marks;
    }
    
    int getCr(){
        return creditHours;
    }

 
    // setter function

    void setMarks(int m){
        marks=m;
    }

    void setCr(int cr){
        creditHours=cr;
    }


      // making default constructor
    CGPA(){
        cout<<"Default Constructor Called"<<endl;
    }

};

int main(){

    cout<<"Hello"<<endl;
    CGPA studentResult;
    cout<<"How are you ?"<<endl;
  

}
