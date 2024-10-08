#include <iostream>
using namespace std;

template <typename T>

class Number
{
private:
    T value;

public:
    Number(T val)
    {
        value = val;
    }

    void setValue(T val)
    {
        value = val;
    }

    T getValue()
    {
        return value;
    }
};

int main()
{
    // Creating a Number object for an int
    Number<int> intObj(123);
    cout << "Initial int value: " << intObj.getValue() << endl;
    intObj.setValue(456);
    cout << "Updated int value: " << intObj.getValue() << endl;

    // Creating a Number object for a double
    Number<double> doubleObj(12.34);
    cout << "Initial double value: " << doubleObj.getValue() << endl;
    doubleObj.setValue(56.78);
    cout << "Updated double value: " << doubleObj.getValue() << endl;

    // Creating a Number object for a string
    Number<string> charObj("Hello");
    cout << "Initial string value: " << charObj.getValue() << endl;
    charObj.setValue("World");
    cout << "Updated string value: " << charObj.getValue() << endl;

    return 0;
}
