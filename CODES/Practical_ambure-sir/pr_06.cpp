#include <iostream>
using namespace std;

class book
{
    string b_name;
    string author;
    int price;
    static int i;

public:
    book() {}
    book(book &c)
    {
        b_name = c.b_name;
        author = c.author;
        price = c.price;
    }
    void getdata()
    {
        i++;
        cout << "Enter the name of the book no " << i << " : ";
        cin >> b_name;
        cout << "Enter the author name : ";
        cin >> author;
        cout << "Enter the price of the book : ";
        cin >> price;
        cout << "---------------------------------------" << endl;
    }

    void print()
    {
        cout << endl
             << endl
             << "The name of the book is " << b_name << endl
             << "The price of the book is " << price << endl
             << "The author of the book is " << author << endl;
    }

    friend void pmax(book b[], int size);
};
int book ::i;
void pmax(book b[], int size)
{
    book x;
    x = book(b[0]);
    for (int i = 0; i < size; i++)
    {
        if (b[i].price > x.price)
        {
            x = book(b[i]);
        }
    }
    x.print();
}
int main()
{
    int size;
    cout << "Enter the size of the object array" << endl;
    cin >> size;
    book b[size];
    for (int i = 0; i < size; i++)
    {
        b[i].getdata();
    }
    pmax(b, size);
    return 0;
}