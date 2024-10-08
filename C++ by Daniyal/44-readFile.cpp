// Reading in files

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin;
    fin.open("44-sampal.txt");
    string st;     // by this we will get on word upto space
    char arr[100]; // by this we will get whole line
    fin >> st;
    fin.getline(arr, 100);
    cout << st;  // st will print (this )
    cout << arr; // arr will print remaining
}