//--------String Slicing----------
#include <bits/stdc++.h>
using namespace std;
int countWords(string s)
{
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            cnt++;
    }
    return cnt;
}
int main()
{
    string str, newStr;
    cout << "Enter your string: ";

    getline(cin, str);
    int n = countWords(str);
    // cout<<n;
    string arr[(n + 1)];
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        arr[j] = arr[j] + str[i];
        if (str[i] == ' ')
            j++;
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << "\n";
        newStr += arr[i];
    }
    cout << newStr;

    return 0;
}