#include <iostream>
using namespace std;
class base
{
    int data;
    int data2;

public:
    base(int v = 23) : data(v), data2(data * v)
    {
        cout << "base function called" << endl;
    }
    void print()
    
    {
        cout << "The data1 is " << data << endl;
        cout << "The data2 is " << data2 << endl;
    }
};

int main()
{
    cout << "main function called " << endl;
    base b(2);
    b.print();
    return 0;
}