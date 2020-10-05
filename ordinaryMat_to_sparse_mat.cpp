#include <iostream>
using namespace std;

int main()
{
    int r, c, i, j;
    cout << "Enter the dimensions of matrix\n";
    cout << "Row: ";
    cin >> r;
    cout << "Column: ";
    cin >> c;
    cout << "Enter the values\n";
    int a[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            cin >> a[i][j];
    }
    cout << "\nEntered Matrix: \n\n";
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "  " << a[i][j] << "    ";
        }
        cout << "\n\n";
    }

    int l = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            if (a[i][j] != 0)
                l++;
    }

    int s[l][3];
    l = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] != 0)
            {
                s[l][0] = i;
                s[l][1] = j;
                s[l][2] = a[i][j];
                l++;
            }
        }
    }
    cout << "\nSparse matrix(Here the Sparse matrix is represented in the form Row Column Value):\n\n";
    cout << " Row  Column  Value\n";
    cout << " ---  ------  -----\n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "  " << s[i][j] << "    ";
        }
        cout << "\n";
    }
    return 0;
}
