#include <iostream>
using namespace std;

class om
{
private:
    int a, b, c;

public:
    int d, e;
    void set(int a1, int b1, int c1);
    void get();
};
void om ::set(int a1, int b1, int c1)
{
    // cout << "enter the value of a,b,c" << endl;
    // cin >> a1 >> b1 >> c1;
    a = a1;
    b = b1;
    c = c1;
}
void om ::get()
{
    cout << "enter the value of " << endl
         << "a = " << a << endl
         << "b = " << b << endl
         << "c = " << c << endl;
}
int main()
{
    om o;
    o.set(2, 3, 4);
    o.get();
    return 0;
}