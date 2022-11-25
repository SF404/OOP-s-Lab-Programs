#include<bits/stdc++.h>
using namespace std;
int main()
{
    // arrays must be sorted 
    int n=6, m=5;
    int a[n]={1,2,3,4,5,6}, b[m]={1,3,7,8,9,},r;

    int c[n+m];
    int i;
    for (i = 0; i < m; i++)
    {
        c[i]=a[i];
    }
    for (int j = 0; i < n; j++)
    {
        c[i]=b[j];i++;
    }
    sort(c, c+(n+m));
    cout<<"de\n";
    for (int j = 0; j < m+n-1; j++)
    {
        if(c[j]==c[j+1]){
            for (int k = j+1; k < m+n-2; k++)
            {
                c[k]=c[j+2];
            }
            
        }
    }
    for (int j = 0; j < sizeof(c)/c[0]; j++)
    {
        cout<<c[j]<<" ";
    }
    // vector<int>a{1,2,3,4,5};
    // vector<int>b{3,4,5,6,7};
    // set<int>s;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     s.insert(a[i]);
    // }
    // for (int i = 0; i < b.size(); i++)
    // {
    //     s.insert(b[i]);
    // }
    // for (int i = 0; i < s.size(); i++)
    // {
    
    // }
    
    
    
    
    
   
    
    


    return 0;
}