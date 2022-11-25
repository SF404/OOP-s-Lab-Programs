// -----------Program to find roots of quadratic Equation---------
#include <bits/stdc++.h>
using namespace std;
void FIndRoots(int a, int b, int c)
{
    int D = ((b * b) - (4 * a * c));
    if (D < 0)
    {
        cout << "No real Roots Exist\n";
        return;
    }
    else if (D == 0)
        cout << "Real and Equal roots Exist: ";
    else
        cout << "Real and Distinct roots Exist: ";

    float r1 = ((-b) + sqrt(D)) / (2 * a), r2 = ((-b) - sqrt(D)) / (2 * a);
    cout << r1 << ", " << r2;
}
int main()
{
    int a, b, c;
    cout << "ax^2 + bx + c\n";
    cout << "Enter the Value of a, b, c respectively: ";
    cin >> a >> b >> c;
    FIndRoots(a, b, c);
    return 0;
}