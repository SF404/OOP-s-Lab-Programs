// --------Reverse the String---------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int n = str.length() - 1;
    int i = 0, j = n;
    while (i < j)
    {

        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        ++i;
        j--;
    }
    cout << str;

    return 0;
}