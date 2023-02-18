#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setData(int a1, int b1);
    void print();
    void setDataBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};
void complex ::setData(int a1, int b1)
{
    a = a1;
    b = b1;
}

void complex ::print()
{
    cout << "The value is " << a << " +i" << b << endl;
}

int main()
{
    complex c1, c2, c3;

    c1.setData(2, 3);
    c1.print();

    c2.setData(2, 3);
    c2.print();

    c3.setDataBySum(c1, c2);
    c3.print();

    return 0;
}