// Compile Time Polymorphism :: Function overloading

#include <iostream>
using namespace std;

class Team
{
public:
    void printTeam()
    {
        cout << "Hello Im Team Pakistan" << endl;
    }

    // we change function argument for same name means we overload it
    void printTeam(string name)
    {
        cout << "Hello Im Team " << name << endl;
    }

    // this also give error cannot overload same func name with diff return type
    /*
    int printTeam()
    {
        cout << "Hello Im Team Pakistan";
        return 1;
    } */
};

int main()
{
    Team teamOne;
    teamOne.printTeam();
    teamOne.printTeam("india");
}