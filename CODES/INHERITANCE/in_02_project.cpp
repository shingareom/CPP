#include <iostream>
using namespace std;

class simple_cal
{
protected:
    int num1;
    int num2;

public:
    void get_SC(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void add()
    {
        cout << "The add is " << (num1 + num2) << endl;
    }
    void substract()
    {
        if (num1 > num2)
            cout << "The substraction is " << (num1 - num2) << endl;
        else
            cout << "The substraction is " << (num2 - num1) << endl;
    }
    void multiply()
    {
        cout << "The * is " << (num2 * num1) << endl;
    }
    void dev()
    {
        float d;
        d = float(num1) / float(num2);
        cout << "The / is " << d << endl;
    }
};

class scientific_cal
{
protected:
    int n1;
    int n2;

public:
    void power(int a, int b)
    {
        int pow = 1;
        for (int i = 0; i < b; i++)
        {
            pow = pow * a;
        }

        cout << "The power is " << pow << endl;
    }
};

class derived : public simple_cal, public scientific_cal
{
protected:
    int a, b;

public:
    void real()
    {
        int chk;
        while (1)
        {

            cout << "\n\n----------------->Enter the 2 numbers<----------------\n";
            cin >> a >> b;
            get_SC(a, b);
            cout << "Enter the opration \t\n1.add\t\n2.sub\t\n3.div\t\n4.mul\t\n5.pow\n6.exit\n\n\n";
            cin >> chk;
            switch (chk)
            {
            case 1:
                add();
                break;

            case 2:
                substract();
                break;

            case 3:
                dev();
                break;

            case 4:
                multiply();
                break;

            case 5:
                power(a, b);
                break;

            case 6:
                exit(0);
                break;

            default:
                cout << "Invalid ! input\n"
                     << endl;
                break;
            }
        }
    }
};

int main()
{
    // simple_cal s;
    // s.get_SC(12, 23);
    // s.add();
    // s.substract();
    // s.dev();
    // s.multiply();

    // scientific_cal sc;
    // sc.power(12, 2);
    derived d;
    d.real();
    return 0;
}


// ----------------->Enter the 2 numbers<----------------
// 123
// 12
// Enter the opration
// 1.add
// 2.sub
// 3.div
// 4.mul
// 5.pow
// 6.exit


// 3
// The / is 10.25


// ----------------->Enter the 2 numbers<----------------
// 123
// 1
// Enter the opration 
// 1.add
// 2.sub
// 3.div
// 4.mul
// 5.pow
// 6.exit


// 2
// The substraction is 122

