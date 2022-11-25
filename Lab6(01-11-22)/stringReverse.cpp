#include<bits/stdc++.h>
using namespace std;
void reverse(string &s){
    int i=0, j=s.length()-1;
    while (i<j)
    {
        swap(s[i], s[j]);
        i++; j--;
    }
    
}
int main()
{
    string s;
    getline(cin, s);
    reverse(s);
    cout<<s;
    return 0;
}