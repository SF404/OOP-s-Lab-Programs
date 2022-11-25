// -------Program to print Union and Intersection of two Arrays--------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 5, m = 11;
    int arr1[n] = {1, 8, 7, 2, 3}, arr2[m] = {2, 3, 4, 5, 8, 7, 1, 3, 4, 5, 6};
    int un[n];
    for (int i = 0; i < n; i++)
    {
        un[i] = arr1[i];
    }
    int intersection[n];
    int r = 0;
    int temp = n;
    int k = 0, l = 0;
    for (int i = 0; i < m; i++)
    {
        bool insert = true;
        for (int j = 0; j < n; j++)
        {
            if (arr2[i] == un[j])
                insert = false;
        }
        if (insert == true)
        {
            un[n + k] = arr2[i];
            k++;
        }
        else
        {
            intersection[l] = arr2[i];
            l++;
        }
    }
    cout << "Union of Arrays: ";
    for (int i = 0; i < n + k; i++)
    {
        cout << un[i] << " ";
    }
    cout << endl
         << "Intersection of Arrays: ";
    for (int i = 0; i < l; i++)
    {
        cout << intersection[i] << " ";
    }

    return 0;
}