// ----------program to detect prime number location using Ascii Colors ---------
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
const char grey = 178;
const char white = 177;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        if (checkPrime(i))
            cout << grey;
        else
            cout << white;
    }

    return 0;
}