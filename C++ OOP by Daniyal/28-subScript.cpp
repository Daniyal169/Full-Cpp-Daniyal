// Array subscripting operator
#include <iostream>
using namespace std;

class Marks
{
    int subMarks[3];
    public:
    Marks(int m1,int m2,int m3){
        subMarks[0]=m1;
        subMarks[1]=m2;
        subMarks[2]=m3;
    }

    int operator [](int index){
        return subMarks[index];
    }
    
};
int main(){
    Marks m1(20,30,40);

    cout<<m1[0]<<endl;
    cout<<m1[1]<<endl;
    cout<<m1[2]<<endl;
}
