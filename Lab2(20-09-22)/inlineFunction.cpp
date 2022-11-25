// ------Program to implement Inline Function--------
#include <bits/stdc++.h>
using namespace std;
inline int Function(){
    cout<<"Hello World\n";
}
int main()
{
    Function();
    Function();
    cout<<sizeof(Function());
    return 0;
}