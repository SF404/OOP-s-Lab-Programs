#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "My name is Suhaib";
    char ch;
    cout << "Enter the character to find its Occurence: ";
    cin >> ch;
    int count = 0, wordCount = 1;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
            count++;
        if (str[i] == ' ')
            wordCount++;
    }
    cout << "Charecter '" << ch << "' Occurs '" << count << "' times\n";
    cout << "Number of words in given string is/are: " << wordCount << "\n";

    return 0;
}