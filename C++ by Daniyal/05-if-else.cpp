#include <iostream>
using namespace std;

int main(){

    // find max of 3 numbers

    int a,b,c;
    cout<<"Enter 3 numbers"<<endl;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"A is maximum"<<endl;
        }

        else{
            cout<<"C is maximum"<<endl;
        }
    }

    else{
        if(b>c){
            cout<<"B is maximum"<<endl;
        }

        else{
            cout<<"C is maximum"<<endl;
        }
    }


    return 0;
}