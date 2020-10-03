#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10], d, e, f, g, i, j, k;
    cout << "Enter rows and columns of first matrix:";
    cin >> d >> e;
    cout << "Enter rows and columns of second matrix:";
    cin >> f >> g;
    if (e == f)
    {
        cout << "\nEnter first matrix:\n";
        for (i = 0; i < d; ++i)
            for (j = 0; j < e; ++j)
                cin >> a[i][j];
        cout << "\nEnter second matrix:\n";
        for (i = 0; i < f; ++i)
            for (j = 0; j < g; ++j)
                cin >> b[i][j];

        cout << "\nEntered Matrix(First): " << endl;
        for (i = 0; i < d; i++)
        {
            for (j = 0; j < d; j++)
            {
                cout << a[i][j] << setw(5);
            }
            cout << "\n";
        }
        cout << "\nEntered Matrix(Second): " << endl;
        for (i = 0; i < d; i++)
        {
            for (j = 0; j < f; j++)
            {
                cout << b[i][j] << setw(5);
            }
            cout << "\n";
        }
        cout << "\nThe new matrix is:\n";
        for (i = 0; i < d; ++i)
        {
            for (j = 0; j < g; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < e; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                cout << c[i][j] << setw(8);
            }
            cout << "\n";
        }
    }
    else
        cout << "Product not possible";
    return 0;
}
