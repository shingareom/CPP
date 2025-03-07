#include <iostream>
using namespace std;

class A
{
    int data1;

public:
    A(int a)
    {
        data1 = a;
    }
    void printData1()
    {
        cout << data1 << " is the data" << endl;
    }
};

class B
{
    int data2;

public:
    B(int a)
    {
        data2 = a;
    }
    void printData1()
    {
        cout << data2 << " is the data" << endl;
    }
};

class deived : public A, public B
{
private:
    int text;

public:
    deived(int a, int b, int c) : A(b), B(c) { text = a; }
};

int main()
{
    deived harry( 2, 3, 4);

    return 0;
}
