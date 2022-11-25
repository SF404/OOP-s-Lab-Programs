#include <bits/stdc++.h>
using namespace std;
int fibSum(int n)
{
    if (n <= 1)
        return n;

    return fibSum(n - 1) + fibSum(n - 2);
}
int printfib(int n)
{
    int j = 0, k = 1, l;
    cout << "0 ";
    for (int i = 2; i <= n; i++)
    {
        l = j + k;
        cout << l << " ";
        j = k;
        k = l;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << fibSum(n);
    // printing fibnocci Series
    cout << endl;
    printfib(n);
    return 0;
}