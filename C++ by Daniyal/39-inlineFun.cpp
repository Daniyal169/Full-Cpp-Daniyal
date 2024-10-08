// INLINE FUNCTIONS , DEAFULT ARGUMENTS

#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    return a * b;
}

/*
    // static variable
int product(int a,int b){
    static int c=0;
     //when the code run 2nd time value of c will be 1 and 3rd time 2 if we dont write static it will show the +1 only once but in static it retains value after adding 1
    c++;
    return a*b+c;
}
*/

int moneyReceived(int money, float factor = 1.04)
{ // factor is deafult argument if we dont add 2nd argument in calling it will take 1.04 as default
    return money * factor;
}

int main()
{

    // FOR  INLINE FUNCTION
    // int n1,n2;
    // cin>>n1>>n2;
    // if we are calling function many time we make that in line so that is reduce time and it will copy the function code in calling
    // cout<<"Product of n1 and n2 is :"<<product(n1,n2)<<endl;
    // cout<<"Product of n1 and n2 is :"<<product(n1,n2)<<endl;

    // DEFAULT ARGUMENTS
    int money;
    cin >> money;
    cout << "If you have RS :" << money << " in your bak account you will get " << moneyReceived(money) << " after one year" << endl;
    cout << "If you have RS :" << money << " in your bak account you will get " << moneyReceived(money, 1.1) << " after one year" << endl; // here we add 2nd argumnt
    return 0;
}