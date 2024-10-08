// Fibonacci example using recursion

#include <iostream>
using namespace std;

int fib(int n){
    if(n<2){
        return 1;
    }

    return fib(n-2)+fib(n-1);
}

int main(){

    int num;
    cout<<"ENter a number :";
    cin>>num;

    cout<<"Fibonacci sequence upto "<<num<<" is "<<fib(num);
    return 0;

    // if we enetr 5 it will return 8 bcz in fibonacci at 5 index we have 8
}