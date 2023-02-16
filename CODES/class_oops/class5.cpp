#include <iostream>
using namespace std;
class boy
{
    int id;
    int price;
    static int co;

public:
    void get()
    {
        co++;
        cout << "Enter the id of no " << co << " boy" << endl;
        cin >> id;

        cout << "Enter the price of no " << co << " boy" << endl;
        cin >> price;
    }
    void display();
    static void printco()
    {
        cout << "The count is " << co << endl;
    }
};
int boy ::co;

void boy ::display()
{
    cout << "this is boy with id " << id << endl;
    cout << "this is boy with price " << price << endl;
}

int main()
{
    boy om, ram, lakhan;
    om.get();
    om.display();
    boy::printco();

    lakhan.get();
    lakhan.display();
    boy::printco();

    ram.get();
    ram.display();
    boy::printco();

    return 0;
}