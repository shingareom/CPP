#include <iostream>
using namespace std;

class number
{
    int A;
    float B;

public:
    number()
    {
        A = 0;
        B = 0;
    }

    number(int x)
    {
        A = x;
        B = 0;
    }

    number(float x)
    {
        A = 0;
        B = float(x);
    }

    void print()
    {
        cout << "The a is " << A << " and b is " << B << endl;
    }
};

int main()
{
    number n1;
    number n2;
    number n3;
    n3.print();
    int a;
    float x;
    cout << "enter the number interger  \n";
    cin >> a;
    n1 = number(x);
    n1.print();
    return 0;
}