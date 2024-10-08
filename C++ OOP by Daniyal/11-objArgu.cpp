// Passing objects as an argument in functions 

#include <iostream>
using namespace std;

class complexNum
{
    int a;
    int b;

    public:
    void setNum(int n1,int n2);
    void sumNumByObj(complexNum obj1,complexNum obj2);
    void displayNum();
};

void complexNum::setNum(int n1,int n2){
    a=n1;
    b=n2;
}
void complexNum::sumNumByObj(complexNum obj1,complexNum obj2){
    a=obj1.a + obj2.a;
    b=obj1.b + obj2.b;
}

void complexNum:: displayNum(){
    cout<<"The sum of complex num is "<<a<<"+"<<b<<"i"<<endl;
}


int main(){

    complexNum numObj1,numObj2,numObj3;

    numObj1.setNum(1,2);
    numObj2.setNum(1,2);
    numObj3.sumNumByObj(numObj1,numObj2);

    numObj1.displayNum();
    numObj2.displayNum();
    numObj3.displayNum();


}