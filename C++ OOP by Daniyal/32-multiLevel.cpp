#include <iostream>
using namespace std;

class Human
{
public:
    int arms;
    int eyes;
};

class Athlete : public Human
{
public:
    Athlete()
    {
        cout << "Hello Im Athelte constructor link b/t Human and Crickter" << endl;
    }
};

class Crickter : public Athlete
{
public:
    void setEye(int e)
    {
        eyes = e;
    }
    void setArms(int a)
    {
        arms = a;
    }
    int getEye()
    {
        return eyes;
    }
    int getArms()
    {
        return arms;
    }
};

int main()
{
    Crickter cricOne;
    cricOne.setEye(2);
    cricOne.setArms(2);

    cout << cricOne.getEye() << endl;
    cout << cricOne.getArms() << endl;
}