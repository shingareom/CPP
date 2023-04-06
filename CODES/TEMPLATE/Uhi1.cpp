#include <iostream>
using namespace std;

class Human
{
private:
    string breed;
    string name;
    string pty;

public:
    Human(void);
    ~Human();
    void setData()
    {
        cout << "Enter the Breed !\n";
        cin >> breed;

        cout << "Enter the Name !\n";
        cin >> name;

        cout << "Enter the Property !\n";
        cin >> pty;
    }
    void PrintData()
    {
        cout << "The Breed is " << breed << " with the name " << name << " having property like " << pty << endl;
    }
};

Human::Human(void)
{
    breed = "NULL";
    name = "NULL";
    pty = "NULL";
}

Human::~Human()
{
    cout << name << " is going to dedth !\n";
}

class dog :public Human 
{
private:
    string breed_dog;

public:
    dog(void);
    ~dog();
    
};

dog::dog(void)
{
    breed_dog = "Normal";
}

dog::~dog()
{
    breed_dog = "NULL";
}

int main()
{
    Human h;
    h.setData();
    h.PrintData();
    // h.~Human();
    dog r;
    r.setData();
    return 0;
}