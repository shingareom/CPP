#include <iostream>
using namespace std;

class base1
{
protected:
    int one;

public:
    void set1(int a)
    {
        one = a;
    }
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
    void set2(int a)
    {
        two = a;
    }
    void get2()
    {
        cout << "The one is = " << two;
    }
};

class derived : public base1, public base2
{
public:
    int add;
    void add1(int add)
    {
        this->add = one + two + add;
        cout << "The add is " << this->add << endl;
    }

    void setD()
    {
        set1(312121);
        set2(323);
    }
};



int main()
{
    derived d;
    d.setD();
    d.add1(32);
    return 0;
}