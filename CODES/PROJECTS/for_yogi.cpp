#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int ch, counter = 0, savepass, ShowAllCHK, ShowByName = 0;
    string pass[100], app[100], check, LockerMainPass;
    cout << "Enter the main locker passKey" << endl;
    cin >> LockerMainPass;
    do
    {
        cout << endl
             << endl
             << "Enter your choice " << endl
             << "1.Save-Pass" << endl
             << "2.Show-By-Name" << endl
             << "3.Show All" << endl
             << "4.Exit" << endl;
        cin >> ch;
        savepass = 0;
        switch (ch)
        {
        case 1:
            savepass = 1;
            goto SavePass;
        SaveReturn:
            break;

        case 2:
            ShowByName = 1;
            goto ShowByName;
        ShowByNameReturn:
            break;

        case 3:
            ShowAllCHK = 1;
            goto ShowAll;
        ShowAllreturn:
            break;

        case 4:
            goto quit;
            break;

        default:
            cout << "INVALID !!!" << endl;
            break;
        }
    } while (1);
    savepass = 0;
    if (savepass == 1)
    {
    SavePass:
        cout << "Enter the app name" << endl;
        cin >> app[counter];
        cout << "Enter your password" << endl;
        cin >> pass[counter];
        counter++;
        goto SaveReturn;
    }

    ShowAllCHK = 0;
    if (ShowAllCHK == 1)
    {
        int test;
    ShowAll:
        cout << "Enter the main pass" << endl;
        cin >> check;
        if (check.compare(LockerMainPass) == 0)
        {
            cout << "The app name and *PASSkey is below" << endl
                 << endl
                 << endl;
            for (int i = 0; i < counter; i++)
            {

                cout << app[i] << "------->"
                     << setw(8)
                     << pass[i] << endl;
            }
        }
        goto ShowAllreturn;
    }

    ShowByName = 0;
    if (ShowByName == 1)
    {
    ShowByName:
        string showtemp;
        int ShowByNameCHKTemp = 0;
        cout << "Enter your app name for the password !" << endl;
        cin >> showtemp;
        for (int i = 0; i < counter; i++)
        {
            if (showtemp.compare(app[i]) == 0)
            {
                cout << "The app name and pass is " << endl
                     << app[i] << endl
                     << pass[i];
                ShowByNameCHKTemp = 1;
            }
        }
        if (ShowByNameCHKTemp == 0)
            cout << "not found !!" << endl;
        goto ShowAllreturn;
    }

quit:
    return 0;
}
