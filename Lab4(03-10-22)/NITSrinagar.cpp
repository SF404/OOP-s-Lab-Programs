#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    string str1;
    for (int i = 0; i < 3; i++)
    {
        cin>>str;
        str=str+" ";
        str1.append(str, 0, str.length());
    }
    cout<<str1;
    
    return 0;
}