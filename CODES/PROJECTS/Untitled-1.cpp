#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    int ch, counter = 0, savepass;
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
            cout << "Enter the app name" << endl;
            cin >> app[counter];
            cout << "Enter your password" << endl;
            cin >> pass[counter];
            counter++;
            break;

        case 2:

            break;

        case 3:
            int test;
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
            break;

        case 4:
            exit(0);
            break;

        default:
            cout << "INVALID !!!" << endl;
            break;
        }
    } while (1);
    return 0;
}
