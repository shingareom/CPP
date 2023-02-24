#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string binary;

public:
    void Setbinary(void);
    void PrintBinary(void)
    {
        cout << binary << endl;
    }
    void Change(void);
    int isBinary(void);
};

void Binary ::Setbinary()
{
    cout << "Enter the Binary Number" << endl;
    cin >> binary;
}

int Binary ::isBinary()
{
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary.at(i) != '1' && binary.at(i) != '0')
        {
            return 0;
        }
    }
    return 1;
}

void Binary ::Change()
{
    for (int i = 0; i < binary.length(); i++)
    {
        if (binary.at(i) == '0')
            binary.at(i) = '1';
        else
            binary.at(i) = '0';
    }
}

int main()
{
    Binary b;
    b.Setbinary();
    if (b.isBinary())
    {
        cout<< "This is Binary"<<endl;
    }    
    b.Change();
    b.PrintBinary();
    return 0;
}