#include <iostream>
using namespace std;

class sample
{
    int data;

public:
    void set()
    {
        cout << "Enter the data" << endl;
        cin >> data;
    }
    void print()
    {
        cout << "The data is " << data << endl;
    }
};

int main()
{
    int size = 5;
    sample *ptr = new sample[size];
    sample *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
        ptr->set(), ptr++;
    ptr = ptrTemp;

    for (int i = 0; i < size; i++)
        ptr->print(), ptr++;
    return 0;
}