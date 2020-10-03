#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i, j, m, n, A[10][10], B[10][10], store[10][10];
    cout << "Enter number of rows and columns for first matrix & second matrix: \n";
    cin >> m >> n;
    cout << "Enter the elements of First matrix: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter the elements of Second matrix: \n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "\nEntered Matrix(First): " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << A[i][j] << setw(3);
        }
        cout << "\n";
    }
    cout << "\nEntered Matrix(Second): " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << B[i][j] << setw(3);
        }
        cout << "\n";
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            store[i][j] = A[i][j];
            store[i][j + n] = B[i][j];
        }
    }
    cout << "\nConcatenated Matrix: " << endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 2 * n; j++)
        {
            cout << store[i][j] << setw(3);
        }
        cout << "\n";
    }
    return 0;
}
