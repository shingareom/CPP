#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
    int id;
    int salary;
public:
    void get();
    void print();
};

void Employee ::get()
{
    cout << "Enter the id" << endl;
    cin >> id;

    cout << "Enter the salary" << endl;
    cin >> salary;
}

void Employee ::print()
{
    cout << "the id is " << setw(6) << id << " and the salary is " << setw(6) << salary << endl;
}
int main()
{
    int size;
    cout << "enter the size" << endl;
    cin >> size;
    Employee one[size];
    for (int i = 0; i < size; i++)
    {
        one[i].get();
    }
    cout << "the data is stored " << endl;
    for (int i = 0; i < size; i++)
    {
        one[i].print();
    }
    return 0;
}