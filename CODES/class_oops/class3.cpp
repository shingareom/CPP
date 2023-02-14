#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void get();
    void check();
    void change();
    void display();
};

void binary ::get()
{
    cout << "enter the binary number " << endl;
    cin >> s;
}

void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "invalid !!" << endl;
            exit(0);
        }
    }
}

void binary ::change()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << endl;
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary om;
    om.get();
    om.display();
    om.check();
    om.change();
    om.display();
    return 0;
}