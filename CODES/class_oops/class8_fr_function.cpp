#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void set(int a1, int b1);
    void print();
    friend complex sum(complex, complex);
};

complex sum(complex c1, complex c2)
{
    complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;
    return c3;
}

void complex ::set(int a1, int b1)
{
    a = a1;
    b = b1;
}

void complex ::print()
{
    cout << "the value is " << a << " + " << b << "i" << endl;
}

int main()
{
    complex c1, c2, c3;
    c1.set(2, 3);
    c1.print();

    c2.set(4, 7);
    c2.print();

    c3 = sum(c1, c2);
    c3.print();
    return 0;
}