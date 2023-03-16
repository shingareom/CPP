#include <iostream>
using namespace std;

class base
{
private:
    int data1;
    int data2;

public:
    base();
    ~base();
    void setbase()
    {
        cout << "Enter the data1 " << endl;
        cin >> data1;
        cout << "Enter the data2 " << endl;
        cin >> data2;
    }

    int getdata1()
    {
        return data1;
    }

    int getdata2()
    {
        return data2;
    }
};

base::base()
{
    data1 = 0;
    data2 = 0;
}

base::~base()
{
}

class Derived : public base
{
    char data3;

public:
    Derived()
    {
        data3 = 0;
    }
    void setderived()
    {
        setbase();
        data3 = char(getdata1() + getdata2()) / 2;
    }
    void printderived()
    {
        cout << "The data 1 is " << getdata1() << endl;
        cout << "The data 2 is " << getdata2() << endl;
        cout << "The data 3 is " << data3 << endl;
    }
};
// ☺
int main()
{
    Derived d;
    // d.setbase();
    d.setderived();
    d.printderived();
    return 0;
}