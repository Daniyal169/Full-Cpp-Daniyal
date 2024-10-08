// Objects Memory Allocation & using Arrays in Classes 

#include <iostream>
using namespace std;

class Shop
{
    int count;
    int itemId[100];
    int itemPrice[100];

    public:

    void initCount(){count=0;}
    void inputVal();
    void displayVal();
};

void Shop::inputVal(){
    cout<<"Enter id of item num :"<<count+1<<endl;
    cin>>itemId[count];
    cout<<"Enter price of item num :"<<count+1<<endl;
    cin>>itemPrice[count];
    count++;
}

void Shop ::displayVal(){
    for(int i=0;i<count;i++){
        cout<<"Price of item with id :"<<itemId[i]<<" is Rs: "<<itemPrice[i]<<endl;
    }
}

int main(){

    Shop dukan;
    dukan.initCount();
    dukan.inputVal();
    dukan.inputVal();
    dukan.inputVal();
    dukan.displayVal();


    return 0;
}