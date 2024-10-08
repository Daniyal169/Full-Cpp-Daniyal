// File I/O in C++:  Writing Files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    ofstream fout;
    fout.open("43-sampal.txt");
    fout << "This is first file we create and write and now over write that";
    fout.close();
    return 0;
}
