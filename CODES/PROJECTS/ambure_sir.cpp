/*
    Data member!

        account number
        depositer name
        account type
        balance amount in the account

    member functions

        initial value = 0
        to deposit an ammount
        withdraw an ammount after checking the balence
        display name and balence

*/

#include <iostream>
using namespace std;

class bank
{
    int Bank_bal;
    string depositer_name, account_number, Rpass;
    enum type
    {
        current = 0,
        saving
    };
    enum type A_TYPE;

public:
    bank()
    {
        Bank_bal = 0;
        depositer_name = account_number = "NULL";
        A_TYPE = saving;
        cout << "Enter the password" << endl;
        cin >> Rpass;
    }

    int deposit()
    {
        string pass;
        int price;
        cout << "Enter the password and the price  " << endl;
        cin >> pass >> price;

        if (Rpass == pass)
        {
            Bank_bal = Bank_bal + price;
            cout << "Transection sucessfull !!" << endl
                 << endl;
            return 1;
        }
        else
        {
            cout << "Pass wrong !!" << endl
                 << endl;
            return 0;
        }
    }

    int withdrawAmmount()
    {
        string pass;
        cout << "Enter the password and the price  " << endl;
        cin >> pass;
        int wAmount;
        if (pass == Rpass)
        {
            cout << "The ammount is " << Bank_bal << endl;
            cout << "Enter the ammont for withdrawal " << endl
                 << endl;
            cin >> wAmount;
            if (wAmount <= Bank_bal)
            {
                Bank_bal = Bank_bal - wAmount;
                return 1;
            }
            else
            {
                cout << "Insuffiencient balence !" << endl
                     << endl;
                return 0;
            }
        }
        else
        {
            cout << "Pass wrong \n\n";
            return 0;
        }
    }

    void get_details()
    {
        int chk;

        cout << "Enter the name" << endl;
        cin >> depositer_name;
        cout << "Enter the account number" << endl;
        cin >> account_number;
        cout << "Enter the 1 for currnt account and 0 for the saving account" << endl
             << endl;
        cin >> chk;
        if (chk == 1)
            A_TYPE = current;
        else
            A_TYPE = saving;
    }

    void show_details()
    {
        cout << "Account number = " << account_number << endl;
        cout << "Depositer name = " << depositer_name << endl;
        cout << "Remaning balence = " << Bank_bal << endl
             << endl;
    }
};

int main()
{
    bank n;
    int m;
    do
    {
        int i;
        cout << "choose the opration " << endl
             << " 1.to deposit an ammount" << endl
             << " 2.withdraw an ammount " << endl
             << " 3.display " << endl
             << " 4.Exit" << endl
             << " 5.set data" << endl;
        cin >> i;
        switch (i)
        {
        case 1:
            n.deposit();
            break;

        case 2:
            n.withdrawAmmount();
            break;

        case 3:
            n.show_details();
            break;

        case 4:
            exit(0);

        case 5:
            n.get_details();

        default:
            break;
        }
    } while (1);

    return 0;
}