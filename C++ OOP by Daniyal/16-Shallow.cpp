#include <iostream>
using namespace std;

class Player
{
public:
    char *name;
    Player();
    void setName(char *name);
    void getVal();
};

Player::Player()
{
    name = new char[100];
}

void Player::setName(char *name)
{
    this->name = name;
}

void Player::getVal()
{
    cout << "Name : " << name << endl;
}

int main()
{

    char name[8] = "Babar";
    Player ply1;
    ply1.setName(name);

    ply1.getVal();

    //    Player ply2=ply1;  // aisy b copy const call ho skta hai
    Player ply2(ply1);
    ply2.getVal();

    ply1.name[0] = 'V';
    ply1.getVal();

    ply2.getVal();
}
// In shallow copy default constructor is used  we make a first obj set its name and cipy that to 2nd obj then we change name of obj 1 obj2 name automaticlly chnaged it is due to shallow copy

// Shallow copy mein hum ny 1 obj bnaya jisko 1 name dia name pointer ha uska ddress fpr exp 710 hai ha jb player one ka name set kia aur ply2 ko chopy dy di tou vo b same address ka name ly ga agr 710 wala name change tou ply2 wala b change deep copy mein hum copy const mein hi 1 new var dec kr dyty hain taky agr in future ply1 chnage krna hoto ply 2 change na ho