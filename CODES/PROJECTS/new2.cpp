#include <iostream>
using namespace std;

class Human
{
    int Height;
    string Name;
public:
    Human()
    {
        Height = 0;
        Name = "NULL";
    }

    Human(int H,string NAME)
    {
        Height = H;
        Name = NAME;
    }
    void set()
    {
        cout<<"Enter the height"<<endl;
        cin>>Height;
        cout<<"Enter the Name"<<endl;
        cin>>Name;
    }
    void Show()
    {
        cout<<"The Height of "<<Name<<" is "<<Height<<endl;
    }
};

int main()
{
    Human om(45,"om");
    
    // om.set();
    om.Show();
    return 0;
}