#include <iostream>
#include <cmath>
using namespace std;

class point
{
    float x, y;

    friend void distancePoint(point p1, point p2);
public:
    point(float p, float q)
    {
        x = p;
        y = q;
    }

};

void distancePoint(point p1, point p2)
{
    float dis;
    dis = sqrt(((p2.x - p1.x) * (p2.x - p1.x)) + ((p2.y - p1.y) * (p2.y - p1.y)));
    cout << "The distance is " << dis<<" Units " << endl;
}

int main()
{

    point p1(0,1);
    point p2(0,34);
    distancePoint(p1,p2);

    return 0;
}