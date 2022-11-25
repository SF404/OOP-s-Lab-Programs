#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l = 3, m = 5, n = l + m;
    int arr1[l] = {1, 2, 3}, arr2[n] = {1, 2, 3, 4, 5}, arr3[n], arr4[n];
    int i = 0, j = 0, r = 0;
    for (int k = 0; k < n; k++)
    {
        if (arr1[i] > arr2[j])
            arr3[k] = arr2[j++];
        else if (arr2[j] > arr1[i])
            arr3[k] = arr1[i++];
        else
        {
            arr3[k] = arr1[i];
            arr4[r] = arr1[i];
            i++;
            j++;
            n--;
            r++;
        }
    }
    cout << "Printing Union: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << "\nPrinting Intersection: ";
    for (int i = 0; i < r; i++)
    {
        cout << arr4[i] << " ";
    }
    return 0;
}