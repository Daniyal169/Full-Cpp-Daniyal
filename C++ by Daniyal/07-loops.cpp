#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;

    int sum=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }

    while(num>0){
        cout<<num<<endl;
        cin>>num;
    }

    cout<<sum<<endl;
}