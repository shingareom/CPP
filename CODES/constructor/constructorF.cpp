#include<iostream>
using namespace std;

class specialNum
{
    int a,b;
    public :
        specialNum(void);
        void print(specialNum n)
        {
            cout<<"The a is "<<n.a<<" and b is "<<n.b<<endl;
        }
};

specialNum :: specialNum()
{
    a = 0;
    b = 0;
}

int main()
{
    specialNum a[10];
    for(int i = 0; i< 10 ; i++)
    a[i].print(a[i]);
    return 0;
}