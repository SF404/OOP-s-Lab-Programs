// ---------Program to Multiply Two Matrix--------
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 2, n = 3;
    int mat1[m][n], mat2[n][m], mat[m][m];
    cout << "Enter the matrix 1:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a" << i + 1 << j + 1 << " = ";
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the matrix 2:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "a" << i + 1 << j + 1 << " = ";
            cin >> mat2[i][j];
        }
    }
    for (int k = 0; k < m; k++)
    {
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += mat1[k][j] * mat2[j][k];
            }
            mat[k][i] = sum;
        }
    }
    cout<<"Matrix after Multiplication is:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    

    return 0;
}