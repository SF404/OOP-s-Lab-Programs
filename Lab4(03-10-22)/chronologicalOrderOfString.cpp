// ----------Print string in chronological Order----------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;
    sort(str.begin(), str.end());
    cout << "Chronoligical order of string is: ";
    cout << str;

    return 0;
}