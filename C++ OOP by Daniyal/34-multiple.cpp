#include <iostream>
using namespace std;

class Human
{
public:
    int age;
};

class Man
{
public:
    int kids;
};

class Crickter : public Human, public Man
{
public:
    void setHuman(int a)
    {
        age = a;
    }
    void setMan(int k)
    {
        kids = k;
    }

    int getHuman()
    {
        return age;
    }
    int getMan()
    {
        return kids;
    }
};

int main()
{
    Crickter cricOne;
    cricOne.setHuman(20);
    cricOne.setMan(2);

    cout << cricOne.getHuman() << endl;
    cout << cricOne.getMan() << endl;
}