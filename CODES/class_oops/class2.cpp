#include <iostream>
using namespace std;

class book
{
private:
    int BastLinePage[100];
    int EndPage[100];

public:
    int price;
    int pages;
    int weight;

    int booksNO(int price, int pages);
    int books(int weight);
    void fillF(void);
};

void book ::fillF(void)
{
    cout << "enter the price of book" << endl;
    cin >> price;

    cout << "enter the pages of book" << endl;
    cin >> pages;

    cout << "enter the weight of book" << endl;
    cin >> weight;
}

int book ::booksNO(int price, int pages)
{
    if (price > 100)
    {
        if (pages > 30)
        {
            return 30;
        }
    }
    else if (price == 100)
    {
        return 20;
    }
    else
    {
        return 10;
    }
}

int book ::books(int weight)
{
    int quantity = 1;
    if (weight >= 50 && weight >= 50)
    {
        quantity = 10;
    }
    else if (weight < 50 && weight < 50)
    {
        quantity = 200;
    }
    return quantity;
}

int main()
{
    int ch, pr, p;
    book b1;
    b1.fillF();
    int bq = b1.books(34);
    cout << "the quantity is " << bq;
    cout << "you wants to know the books number ?" << endl;
    cin >> ch;
    if (ch == 1)
    {
        cout << endl
             << "enter the pages " << endl;
        cin >> p;
        cout << "enter the price  " << endl;
        cin >> pr;
        cout << "the book number is " << b1.booksNO(pr, p);
    }
    return 0;
}