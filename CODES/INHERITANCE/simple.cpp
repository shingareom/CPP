//    type of inheritance

//     Simple
//     Multiple
//     Herarchical
//     multilevel
//     hybrib

#include <iostream>
using namespace std;

class human
{
public:
    int age;
    string name;
    void gethuman()
    {
        cout << "Enter the age : ";
        cin >> age;
        cout << "Enter the name : ";
        cin >> name;
    }
};

class om : public human
{
    int size;
    int speed;
    int age;
    string gfname;

public:
    void getdata(int i, int j, string k)
    {
        size = i;
        speed = j;
        gfname = k;
    }
    void getbase()
    {
        name = "om shingare";
        age = 18;
    }
    void putd()
    {
        cout << "The age is " << age;
    }
};

int main()
{
    om oma;
    oma.gethuman();
    oma.getdata(23, 3, "xx");
    oma.getbase();
    oma.putd();

    return 0;
}