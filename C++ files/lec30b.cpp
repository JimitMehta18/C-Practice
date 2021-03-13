#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    friend double distance(point, point);

    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

double distance(point p1, point p2)
{
    int d = p2.x - p1.x;
    int e = p2.y - p1.y;
    int f = sqrt((d * d) + (e * e));
    return f;
}
// H.W  Create a function which takes 2 point objects and computes the distance b/w those points
// Hint : Make it a friend function

/* 

Examples :
Distance between (1, 1) and (1, 1) is 0
Distance between (0, 1) and (0, 6) is 5
Distance between (1, 0) and (70, 0) is 69

*/

int main()
{
    point p(1, 1);
    // p.displayPoint();

    point q(1, 1);
    // q.displayPoint();

    int f = distance(p, q);
    cout<<f;

    return 0;
}