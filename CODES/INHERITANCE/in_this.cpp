#include <iostream>
using namespace std;

class number
{
    int a;
    int b;

public:
    number() : a(10), b(20) {}
    number &set(int a, int b)
    {
        this->a = a;
        this->b = b;
        return *this;
    }
    void print()
    {
        cout << "The a is " << a
             << endl
             << "The b is " << b
             << endl;
    }
};

int main()
{
    number n;
    n.set(12, 34).set(23, 23).print();
    return 0;
}