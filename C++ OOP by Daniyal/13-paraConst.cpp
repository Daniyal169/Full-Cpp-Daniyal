// Parameterized and Default Constructors In C++

#include <iostream>
using namespace std;

class Stats
{
    int runs, wickets;

public:
    Stats(int, int);
    void displayVal();
};
Stats::Stats(int x, int y)
{
    runs = x;
    wickets = y;
}

void Stats::displayVal()
{
    cout << "Player scored :" << runs << " runs and took " << wickets << " wickets" << endl;
}

int main()
{

    // Implicit call
    Stats playerStats1(156, 20);
    // Explicit vcall
    Stats playerStats2 = Stats(10, 5);

    playerStats1.displayVal();
    playerStats2.displayVal();

    return 0;
}