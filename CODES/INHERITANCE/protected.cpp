#include <iostream>
using namespace std;

class base
{
protected:
    int a;
    int b;

public:
    int d;
    void getdata()
    {
        cout << "Enter the 3 numbers" << endl;
        cin >> a >> b;
    }
};
class Derived : public base
{
public:
    int e;
    void setdata()
    {
        getdata();
        cin >> e;
    }
    void printf()
    {
        cout << "The a b & e is"
             << endl
             << a << " " << b << " " << e
             << endl;
    }
    void printf(string text)
    {
        cout << text << endl;
    }
    void scanf(int &al)
    {
        cin>>al;
    }
};

int main()
{
    Derived d;
    d.setdata();
    d.printf();
    d.printf("this is om");
    return 0;
} 