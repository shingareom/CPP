#include <iostream>
using namespace std;

class number
{
    int a, b;

public:
    number()
    {
        a = 0;
        b = 0;
    }

    number(int x)
    {
        a = x;
        b = 0;
    }
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    void print()
    {
        cout << "The a is " << a << " and b is " << b << endl;
    }
};

int main()
{
    number n1;
    n1.print();

    number n2;
    n2 = number(3);
    n2.print();

    number n3(6, 7);
    n3.print();

    return 0;
}