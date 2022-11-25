// -----------Program to Print the Sum of Two Matrices----------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the Number Of Rows and Columns of each Matrix: ";
    cin >> m >> n;
    int A[m][n];
    int B[m][n];
    cout << "Enter the elements in  matrix A:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    cout << "Enter the elements in  matrix B:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];
    cout << "The Sum Of two Matrix is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << A[i][j] + B[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}