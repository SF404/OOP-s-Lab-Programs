#include <bits/stdc++.h>
using namespace std;

// Time complexity is O(n)
// Space complexity is O(1)

void countStringProperties(string &s)
{
    
}
int main()
{
    string s;
    getline(cin, s);
    // countStringProperties(s);
    int specialChar = 0, spaceCount = 0, numCount = 0, totalChar = 0, uppercaseCount = 0, lowercaseCount = 0, n = s.length();
    cout<<s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            uppercaseCount++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            lowercaseCount++;
        else if (s[i] == ' ')
            spaceCount++;
        else if (s[i] >= '0' && s[i] <= '9')
            numCount++;
        else
            specialChar++;
    }
    // cout<<spaceCount;
    cout << "Total charecter: " << n-spaceCount << "\n";
    cout << "Total UpperCase Letters: " << uppercaseCount << "\n";
    cout << "Total LowerCase Letters: " << lowercaseCount << "\n";
    cout << "Total Number: " << numCount << "\n";
    cout << "Total Words: " << spaceCount + 1 << "\n";
    cout << "Total Special Charecter: " << specialChar << "\n";
    return 0;
}