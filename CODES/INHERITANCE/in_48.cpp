#include <iostream>
using namespace std;

class base1
{

public:
    int d1;
    base1(int a)
    {
        d1 = a;
        cout << "Const called 1" << endl;
    }
};

class base2
{

public:
    int d2;
    base2(int a)
    {
        cout << "Const called 2" << endl;
        d2 = a;
    }
};

class derived : public base1, public base2
{
    int d3;

public:
    derived(int a, int b, int c) : base1(a), base2(b)
    {
        cout << "Const called 3" << endl;
        d3 = c;
    }
    void printall()
    {
        cout << "The d1 is " << d1 << endl;
        cout << "The d2 is " << d2 << endl;
        cout << "The d3 is " << d3 << endl;
    }
};
int main()
{
    derived d(1, 3, 4);
    return 0;
}