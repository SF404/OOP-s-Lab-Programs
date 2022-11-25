// ----------Program to check weather a number is prime or not---------
#include <bits/stdc++.h>
using namespace std;
bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    if (checkPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is Not Prime";
    return 0;
}