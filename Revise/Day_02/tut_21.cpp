#include <iostream>
using namespace std;

class Emp
{
    int a, b, c;

public:
    int d, e;

    void setData(int a, int b, int c);
    void getData()
    {
        cout << "The Value of A is :" << a << endl;
        cout << "The Value of B is :" << b << endl;
        cout << "The Value of C is :" << c << endl;
    }
};

void Emp::setData(int a, int b, int c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}

int main()
{
    cout << "Hello, World!" << endl;
    Emp Om;
    Om.setData(1, 2, 3);
    Om.d = 1023;
    Om.e = 123;
    Om.a = 123;
    Om.getData();

    return 0;
}