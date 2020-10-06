#include<iostream>
using namespace std;

int main()
{
	int r, c, l, i, j;
	cout<<"Enter the size of sparse matrix (Triplet foramat): ";
	cin>>l;
	int s[l][3];
	cout<<"Enter the values: \n";
	 for (i = 0; i < l; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin>>s[i][j];
        }
	}
	  cout << "\nEntered Matrix: \n\n";
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < l; j++)
        {
            cout << "  " << s[i][j] << "    ";
        }
        cout << "\n\n";
    }
	r = s[0][0];
	c = s[0][1];
	for (i = 1; i < l; i++)
	{
		if (s[i][0] > r)
		r = s[i][0];
		if (s[i][1] > c)
		c = s[i][1];
	}
	r++; 
    c++;
	int a[r][c] = { };
	for (i = 0; i < l; i++)
	a[s[i][0]][s[i][1]] = s[i][2];
	cout<<"Original matrix is:\n\n";
	for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cout << "  " << a[i][j] << "    ";
        }
        cout << "\n\n";
    }
}
