#include <iostream>
#include <iomanip>
using namespace std;
class shop
{
private:
    int itemId[100], counter, itemPrice[100], passkey, limit = 3;
    string name[100];
    void namerev();
    void getpass()
    {
        cout << "Enter the main password " << endl
             << "  : ";
        cin >> passkey;
    }

public:
    void initco()
    {
        counter = 0;
        getpass();
    }
    void get();
    void print();
};

void shop ::get()
{
    cout << "enter the id of no." << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter the name of no." << counter + 1 << endl;
    cin >> name[counter];
    cout << "enter the price of no." << counter + 1 << endl;
    cin >> itemPrice[counter];
    cout << endl
         << endl;
    counter++;
}

void shop ::print()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the id is " << setw(5) << itemId[i] << " and price is " << setw(5) << itemPrice[i] << endl;
    }
    int chk, ch;
    cout << "enter one for secret information" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << "enter the passkey for secret info!!" << endl;
        cin >> chk;
        if (limit >= 1)
        {
            if (chk == passkey)
            {
                namerev();
            }
            else
            {
                limit--;
                cout << "INVALID PASSWORD !!" << endl
                     << "You remain only " << limit << " chance" << endl;
                cout << endl
                     << endl;
            }
        }
        else
        {
            cout << "You are blocked !!!" << endl;
            cout << endl
                 << endl;
            exit(0);
        }
    }
    else
        exit(0);
    // else if (limit <= 0)
    // {
    //     cout << "you are blocked !!" << endl;
    //     exit(0);
    // }
}

void shop ::namerev()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The name and profit is " << name[i] << " " << itemPrice[i] * 0.35 << endl;
    }
    cout << endl
         << endl;
}

int main()
{
    shop s;
    int ch;
    s.initco();
    do
    {
        cout << "enter your choice " << endl
             << "1.EXIT" << endl
             << "2.Set Product" << endl
             << "3.Print Data" << endl
             << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            exit(0);
            break;

        case 2:
            s.get();
            break;

        case 3:
            s.print();
            break;

        default:
            cout << "INVALID !!!" << endl;
            break;
        }
    } while (1);
    return 0;
}