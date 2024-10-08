// Classes, Public and Private access modifiers in C++

#include <iostream>

using namespace std;

// decalre a class name hero inside the class name there is private variable age by default it is private
class Hero
{
    int age;
};

// empty class
class Empty
{
};

class Player
{
public:
    char name[100] = "Babar Azam";
    int age;
    int runs;
};

int main()
{

    Hero hr; // object name hr of type hero
    Empty ep;
    cout << "Size :" << sizeof(hr) << endl;
    cout << "Size :" << sizeof(ep) << endl; // empty class allocate size of 1 byte.

    Player playerDetail;
    playerDetail.age = 29;
    playerDetail.runs = 569;

    cout << "Name of player is :" << playerDetail.name << endl;
    cout << "Name of player is :" << playerDetail.age << endl;
    cout << "Name of player is :" << playerDetail.runs << endl;
    return 0;
}