#include <iostream>
using namespace std;

class staff
{
    string name;
    int basic_sal;
    float gross_sal, da, hra;

public:
    void getdata()
    {

        cout << "Enter the basic salary  "
             << " : ";
        cin >> basic_sal;

        cout << "enter the name : ";
        cin >> name;
        cout << "---------------------------------------" << endl;
    }
    void display()
    {
        da = basic_sal * (74.5 / 100);
        hra = basic_sal * (30.0 / 100);
        gross_sal = basic_sal + hra + da;
        cout << "The name is " << name << endl
             << " the DA is " << da << endl
             << " the HRA is " << hra << endl
             << " the GROSS salary is " << gross_sal << endl;
    }
};

int main()
{
    staff s;
    s.getdata();
    s.display();
    return 0;
}