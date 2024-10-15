// UNION and ENUM

#include <iostream>
using namespace std;

union players
{                 // union mein eek wqt mein eek hi use kr skty hain
    int num;      // 4 byte
    char favChar; // 1 byte
    float score;  // 4 byte
};
// agr ye structure hota tou total memory 9 byte but in union memeory is shared so total is 4 byte ye memory allocate krta ha max jo ho utni

int main()
{

    union players p1;
    p1.num = 20;
    p1.score = 169; // ab humny score b use kia tou num ki value garbage ajygi q k eek time mein 1 hi use kr skty hain

    cout << p1.num << endl;

    enum meal
    {
        breakfast,
        lunch,
        dinner
    }; // ye eek datatype bn gya ha ismy value store hogya ha

    meal m1 = breakfast;

    cout << m1 << endl;
    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;

    return 0;
}