// -----------Count the String Properties-----------
#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ai)
{
    return (ai == 'a' || ai == 'e' || ai == 'i' || ai == 'u' || ai == 'A' || ai == 'E' || ai == 'I' || ai == 'O' || ai == 'U');
}
int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << str << "\n";
    int cntChar = 0, cntWords = 1, cntNum = 0, specialChar = 0, Vcnt = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            cntChar++;
            if (isVowel(str[i]))
            {
                Vcnt++;
            }
        }
        else if (str[i] == ' ')
            cntWords++;
        else if (str[i] >= '0' && str[i] <= '9')
            cntNum++;
        else
            specialChar++;
    }
    cout << "Number of Alphabets: " << cntChar << "\n";
    cout << "Number of Words: " << cntWords << "\n";
    cout << "Number of Number Digits: " << cntNum << "\n";
    cout << "Number of Special Charecter: " << specialChar << "\n";
    cout << "Number of Vowel: " << Vcnt << "\n";
    return 0;
}