#include <iostream>
using namespace std;

class Player
{
    int runs;
    int age;

public:
    Player(int, int);
    Player(Player &obj);
    void getVal();
};

// parameterized constructor
Player::Player(int a, int b)
{
    runs = a;
    age = b;
}

// agar hum is ko nai bnaye gy phir b ye chl jyga q k 1 def copy const khud hi ban jata hai
//  copy constructor
Player::Player(Player &obj)
{
    this->runs = obj.runs;
    this->age = obj.age;
}

void Player::getVal()
{
    cout << "The age of player is " << age << " and he score " << runs << " runs" << endl;
}

int main()
{
    Player Babar(5000, 29);
    Babar.getVal();

    Player Virat(Babar);
    Virat.getVal();
}