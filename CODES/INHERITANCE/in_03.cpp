#include <iostream>
using namespace std;

class base1
{
protected:
    int one;

public:
    void get1()
    {
        cout << "The one is = " << one;
    }
};

class base2
{
protected:
    int two;

public:
    void get1()
    {
        cout << "The one is = " << two;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void get1()
    {
        base1::get1();
    }
};

int main()
{
    derived d;
    d.get1();
    return 0;
}