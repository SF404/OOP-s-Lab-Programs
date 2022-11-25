// --------Program to Implement Friend Function--------
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a, b;

public:
    int setData(int x, int y)
    {
        a = x;
        b = y;
    }
    friend int getData(A);
};
int getData(A obj)
{
    return max(obj.a, obj.b);
}
int main()
{
    class A obj;
    obj.setData(2, 10);
    cout << getData(obj);

    return 0;
}