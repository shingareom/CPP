#include <iostream>
using namespace std;

template <class T = int, class Q = int>
class number
{
    T a;
    Q b;

public:
    number(T a, Q b) : a(a), b(b) {}
    void add()
    {
        cout << "The sum is " << a << endl;
    }
};

int main()
{
    number<> n(234,23423);
    n.add();

    return 0;
}