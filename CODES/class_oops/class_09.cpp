#include <iostream>
using namespace std;

struct sample
{
public:
    int n1;
    int n2;

private:
    float f;
    float f2 = 3.14F;
};

struct base : public sample
{
    int d;
};

int main()
{
    cout << "hey this is my  code.. !" << endl << " that do nothing ! 😁";
    return 0;
}