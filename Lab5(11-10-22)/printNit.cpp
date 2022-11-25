#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, newStr;
    cout << "Enter your string: ";

    getline(cin, str);
    string arr[4];
    int j = 0;
    for (int i = 0; i < str.length(); i++)
    {
        arr[j] = arr[j] + str[i];
        if (str[i] == ' ')
            j++;
    }
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << "\n";
        newStr += arr[i];
    }
    cout << newStr;

    return 0;
}