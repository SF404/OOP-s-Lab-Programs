#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 4, m = 6, n = l + m;
    int arr1[l] = {1, 2, 3, 4}, arr2[m] = {3, 4, 5, 6, 7, 8}, arr3[n];
    for (int i = 0; i < l; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        arr3[l + i] = arr2[i];
    }
    sort(arr3, arr3 + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr3[i] == arr3[i + 1])
        {

            for (int j = i; j < n - 1; j++)
            {
                arr3[j] = arr3[j + 1];
            }
            --n;
        }
    }
    cout << "Printing Union\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}