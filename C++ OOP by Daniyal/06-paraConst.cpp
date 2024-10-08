// Parameterized Constructotr

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

    // Parameterized constructor
    CPGA(int m){
        marks=m;
    }

    

};

int main(){

  

}
