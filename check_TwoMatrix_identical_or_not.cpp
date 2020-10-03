#include <iostream>
using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], x, y;

    cout << "Enter number of rows and columns for first matrix & second matrix: \n";
    cin >> m >> n;
    cout << "Enter the elements of first matrix\n";
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            cin >> first[c][d];
        }
    }
    cout << "Enter the elements of second matrix\n";
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            cin >> second[c][d];
        }
    }

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            if (first[c][d] == second[c][d])
                x = 1;
            else
                x = 0;
            ;
        }
    }
    if (x == 1)
        cout << "Matrices are Identical ";
    else
        cout << "Matrices are not Identical ";
    return 0;
}

