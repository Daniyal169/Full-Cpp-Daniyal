// Static data memebers and static functions
// suppose we have a varable id and count in an class employee we make get set functions and make 3 objects all objects have diff ids but we want count to be same for all objects so for this purpose we will use ststic variables

#include <iostream>
using namespace std;

class Player
{
    int score;
    static int count; // we decalre static count by def it is initialize with 0

public:
    void inpVal()
    {
        cout << "ENter score of player :";
        cin >> score;
        count++;
    }

    void dispVal()
    {
        cout << "Score of player num " << count << "  is :" << score << endl;
    }

    // this is static memeber function which can access static memebrs
    static void getCount()
    {
        // cout<<score; //throw error
        cout << "The value of count is :" << count << endl;
    }
};

// count is the static data member of class emplyee
int Player::count; // count var will take memory once and then only its val updates

int main()
{
    Player babar, virat, fakhar;

    babar.inpVal();
    babar.dispVal();
    Player::getCount();

    virat.inpVal();
    virat.dispVal();
    Player::getCount();

    fakhar.inpVal();
    fakhar.dispVal();
    Player::getCount();

    return 0;
}

// ab is class k jitny b obj ban jaye us my count ki val purany obj sy hi aygi agr simple count bnaya hota tou har obj k liye count renew hota lkin ab nai hoga