#include <iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter shirt number"<<endl;
    cin>>num;

    switch (num)
    {
        case 169:
            cout<<"Daniyal";
        break;
        case 56:
            cout<<"Babar";
        break;
        case 18:
            cout<<"Virat";
        break;
        case 10:
            cout<<"Shaheen";
        break;
        default:
            cout<<"Not found";
        break;
        
    }
}