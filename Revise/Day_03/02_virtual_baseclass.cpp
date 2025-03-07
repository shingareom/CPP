#include <iostream>
using namespace std;
class A
{
    int test;

public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};
class B : public A
{
};
class C : public A
{
};
class D : public B, public C
{
};

int main()
{
    D test;
    // test.say();
    test.test = 1231;
}