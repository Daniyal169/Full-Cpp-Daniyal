// OOPs Recap & Nesting of Member Functions in C++

#include <iostream>
using namespace std;

class Binary
{
private:
    char str[50];
    void checkBinary();

public:
    void readBinary();
    void onceComp();
    void displayBinnary();
};

void Binary::readBinary()
{
    cout << "Enter characters :";
    cin >> str;
}

void Binary::checkBinary()
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            cout << "Incorrect BInnary form" << endl;
            break;
        }
    }
}

void Binary::onceComp()
{
    checkBinary(); // we make checkBInnary private and access it by nesting.
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '0')
        {
            str[i] = '1';
        }
        else
        {
            str[i] = '0';
        }
    }
}

void Binary::displayBinnary()
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{

    Binary binaryForm;
    binaryForm.readBinary();
    // binaryForm.checkBinary();
    binaryForm.onceComp();
    binaryForm.displayBinnary();

    return 0;
}