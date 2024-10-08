// Member func template and temp func overloading

#include <iostream>
using namespace std;

template <class T>
class crickter
{
    T score;

public:
    crickter(T s)
    {
        score = s;
    }
    void display();
};

template <class T>
void crickter<T>::display()
{
    cout << score << endl;
}

int main()
{
    crickter<int> objOne(56);
    objOne.display();

    crickter<float> objTwo(20.5);
    objTwo.display();
}