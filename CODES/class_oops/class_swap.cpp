#include <iostream>
using namespace std;

class second;
class first
{
    friend void swap(first &, second &);
    friend void print(first f, second s);
    int num1;

public:
    void set(int a)
    {
        num1 = a;
    }
};

class second
{
    friend void swap(first &, second &);
    friend void print(first f, second s);
    int num2;

public:
    void set(int b)
    {
        num2 = b;
    }
};

void swap(first &n1, second &n2)
{
    int temp = n1.num1;
    n1.num1 = n2.num2;
    n2.num2 = temp;
}

void print(first f, second s)
{
    cout<< "The first is "<<f.num1<<" and second is "<<s.num2<<endl;
}

int main()
{
    int c,d;
    first a;
    second b;
    cout<<"Enter the first number "<<endl;
    cin>>c;
    a.set(c);
    cout<<"Enter the second number "<<endl;
    cin>>d;
    b.set(d);
    print(a,b);
    swap(a,b);
    print(a,b);
    return 0;
}