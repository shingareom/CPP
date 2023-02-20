#include <iostream>
using namespace std;
class number;
class calculation
{
public:
    int chk_even(number);
    int chk_odd(number);
    int chk_pos(number);
    int chk_neg(number);
    int chk_zero(number);
};
class number
{
    int n;
    friend class calculation;
    // friend int even ::chk_en(number);

public:
    void set();
    // {
    //     cout << "Enter the number :" << endl;
    //     cin >> n;
    // }
};

void number ::set()
{
    cout << "Enter the number :" << endl;
    cin >> n;
}

int calculation ::chk_even(number n1)
{
    if (n1.n % 2 == 0)
        return 1;
    else
        return 0;
}

int calculation ::chk_odd(number n1)
{
    if (n1.n % 2 == 0)
        return 0;
    else
        return 1;
}

int calculation ::chk_pos(number n1)
{
    if (n1.n >= 0)
        return 1;
    else
        return 0;
}

int calculation ::chk_neg(number n1)
{
    if (n1.n < 0)
        return 1;
    else
        return 0;
}

int calculation ::chk_zero(number n1)
{
    if (n1.n == 0)
        return 1;
    else
        return 0;
}

int main()
{
    number n1;
    calculation e;
    n1.set();
    int res = e.chk_even(n1);
    if (res == 1)
        cout << "This is even" << endl;

    res = e.chk_odd(n1);
    if (res == 1)
        cout << "This is odd" << endl;

    res = e.chk_pos(n1);
    if (res == 1)
        cout << "This is positive" << endl;

    res = e.chk_neg(n1);
    if (res == 1)
        cout << "This is negative" << endl;

    res = e.chk_zero(n1);
    if (res == 1)
        cout << "This is zero" << endl;

    return 0;
}