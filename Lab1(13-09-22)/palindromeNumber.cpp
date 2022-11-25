// -----------Program to Check Palindrome Number-------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n, m = 0;
    while (n != 0)
    {
        m = m * 10 + (n % 10);
        n = n / 10;
    }
    cout << m << "\n";
    if (m == temp)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}