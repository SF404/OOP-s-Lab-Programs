// ------------Program to demonistrate the use of Constructor-----------
#include <bits/stdc++.h>
using namespace std;
class AreaOfRectangle
{
    int l, b;

public:
    AreaOfRectangle(int, int);
    int getArea();
};
AreaOfRectangle::AreaOfRectangle(int x, int y)
{
    l = x;
    b = y;
}
int AreaOfRectangle::getArea()
{
    return (l * b);
}
int main()
{
    int length, breadth;
    cout << "Enter the length of Rectangle: ";
    cin >> length;
    cout << "Enter the breadth of Rectangle: ";
    cin >> breadth;
    AreaOfRectangle rec{length, breadth};
    cout << rec.getArea();
    return 0;
}