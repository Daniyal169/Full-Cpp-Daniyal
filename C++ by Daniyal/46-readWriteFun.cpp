// Read and write functions in c++

#include <iostream>
using namespace std;

int main(){
   char arr[10];
   cout<<"Enter a string :";
   cin.read(arr,10);
   cout<<"Entered string is :";
   cout.write(arr,10); 
}