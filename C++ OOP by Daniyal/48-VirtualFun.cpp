#include <iostream>
using namespace std;

class Cricket
{
public:
    virtual void display()
    {
        cout << "Welcome to Pakistan Cricket Team" << endl;
    }
};

class Batting : public Cricket
{
    int runs;

public:
    void setBat(int r)
    {
        runs = r;
    }
    void display() override
    {
        cout << "Pakistan scored " << runs << " runs" << endl;
    }
};

class Bowling : public Cricket
{
    int wickets;

public:
    void setBall(int w)
    {
        wickets = w;
    }
    void display() override
    {
        cout << "Pakistan took " << wickets << " wickets" << endl;
    }
};

int main()
{
    Cricket *cricPtr[2];

    Batting batObj;
    Bowling ballObj; // agr bowling class ka display na hota tou base class ka display chl jana tha iski jgha lkin agr hum chahty hain k humy derived class mein display lazmi bnana tou cric k virtual ko pure virtual func bnana pryga this is in next file

    cricPtr[0] = &batObj;
    batObj.setBat(56);
    cricPtr[0]->display();

    cricPtr[1] = &ballObj;
    ballObj.setBall(6);
    cricPtr[1]->display();
}