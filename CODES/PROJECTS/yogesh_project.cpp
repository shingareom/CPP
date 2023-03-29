#include <iostream>
using namespace std;

class password
{
private:
    int a = 0;

public:
    void input(int g);
    void display(int f)
    {
        if (f == 1 && a != 0)
        {
            cout << "password of youtube is " << a << endl
                 << endl;
        }
        if (f == 2 && a != 0)
        {
            cout << "password of chrome is " << a << endl
                 << endl;
        }
        if (f == 3 && a != 0)
        {
            cout << "password of amazon is " << a << endl
                 << endl;
        }
    }
};

void password ::input(int n1)
{

    a = n1;
}
int main()
{
    int a, b, c, d, e;
    password you, chr, ama;
    cout << "Input program password" << endl;
    cin >> d;
    do
    {
        cout << endl
             << "select a option " << endl
             << "1) save" << endl
             << "2) show" << endl
             << "3) exit" << endl;
        cin >> a;

        switch (a)
        {

        case 1:
            cout << "select a option " << endl
                 << "1) Youtube" << endl
                 << "2) Chrome" << endl
                 << "3) Amazon" << endl;
            cin >> b;
            cout << "enter password" << endl;
            cin >> c;
            if (b == 1)
            {
                you.input(c);
            }
            else if (b == 2)
            {
                chr.input(c);
            }
            else if (b == 3)
            {
                ama.input(c);
            }
            break;
        case 2:
            cout << "Enter program Password" << endl;
            cin >> e;
            if (d == e)
            {
                you.display(1);
                chr.display(2);
                ama.display(3);
            }
            else
                cout << "Wrong password" << endl;
            break;
        case 3:
            goto exit;
        }
    } while (1);

exit:
    return 0;
}