#include <iostream>
using namespace std;

template <class om>
class temp
{
    om a, b;

public:
    temp(om a, om b) : a(a), b(b) {}
    void swap()
    {
        om te;
        te = a;
        a = b;
        b = te;
        cout << "Swaped !!" << endl;
    }
    void display()
    {
        cout << "The a = " << a
             << endl
             << "The b = " << b
             << endl
             << endl
             << endl
             << endl;
    }
};

int main()
{
    temp<int> obj(2, 3);
    obj.display();
    obj.swap();
    obj.display();


    temp<char> obj1('a', 'b');
    obj1.display();
    obj1.swap();
    obj1.display();

    temp<string> obj2("yogesh","om");
    obj2.display();
    obj2.swap();
    obj2.display();


    return 0;
}