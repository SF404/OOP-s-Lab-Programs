// ----------first repeated element of array------------
#include <bits/stdc++.h>
using namespace std;
class repeated
{
public:
    char character(string str)
    {
        for (int i = 0; i <= str.length(); i++)
        {
            for (int j = i + 1; j < str.length() - 1; j++)
            {
                if (str[i] == str[j] && str[i] != ' ')
                {
                    cout << "First Repeated Element is: " << str[i];
                    return str[i];
                }
            }
        }
        cout << "No repeated Element is found\n";
        return '_';
    }
};
int main()
{
    string str;
    getline(cin, str);
    repeated detect;
    detect.character(str);
    return 0;
}