#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename T1, typename T2>
T2 add(T1 a, T2 b)
{
    return a + b;
}

int main()
{
    cout << "Addition int :" << add<int>(1, 2) << endl;
    cout << "Addition float :" << add<float>(1.6, 2.5) << endl;

    cout << "Addition of int and float datatype :" << add<int, float>(1, 2.5) << endl;
}
