// in this we will read and write using ios::out,in

#include <iostream>
#include <fstream>
using namespace std;
int main(){
    fstream file;
    
    // Writing in file
    file.open("45-inp.txt",ios::out);
    if(file.is_open()){
        file<<"Hello Daniyal ";
         file.close();
    }

    // Appending into that file 
    file.open("45-inp.txt",ios::app);
    file<<" Welcome to CS";
    file.close();

    // Reading from file
    file.open("45-inp.txt",ios::in);
    char arr[20];
    while(!file.eof()){
       file>>arr;
       cout<<arr<<" ";
    }
}