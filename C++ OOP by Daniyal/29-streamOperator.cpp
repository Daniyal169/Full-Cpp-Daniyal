#include <iostream>
using namespace std;

class Player
{
    int runs;
    float avg;

public:
    Player(int r, float a)
    {
        runs = r;
        avg = a;
    }

    friend istream &operator>>(istream &in, Player &obj)
    {
        cout << "Enter runs :";
        in >> obj.runs;
        cout << "Enter average :";
        in >> obj.avg;
        return in;
    }

    friend ostream &operator<<(ostream &out, Player &obj)
    {
        out << "Player scored :" << obj.runs << " runs" << endl;
        out << "Player average is  :" << obj.avg << endl;
    }
};

int main()
{

    Player playerDetail(20, 26.5);
    cout << playerDetail;

    cin >> playerDetail;
    cout << "Updated :";
    cout << playerDetail;

    return 0;
}
