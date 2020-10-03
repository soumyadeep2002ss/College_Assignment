#include <iostream>
using namespace std;

int max(int m, int n)
{
	return (m > n) ? m : n;
}
int *add(int A[], int B[], int m, int n)
{
	int size = max(m, n);
	int *sum = new int[size];
	for (int i = 0; i < m; i++)
		sum[i] = A[i];

	for (int i = 0; i < n; i++)
		sum[i] += B[i];

	return sum;
}
void Display(int poly[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << poly[i];
		if (i != 0)
			cout << "x^" << i;
		if (i != n - 1)
			cout << " + ";
	}
}
int main()
{
	int m, n;
	cout << "How many elements u want (Poly1): ";
	cin >> m;
	int A[10];
	cout << "Enter elements(Format- Polynomial c + Bx^2 + Ax^3 .......) :" << endl;
	for (int i = 0; i < m; i++)
	{
		cin >> A[i];
	}

	cout << "How many elements u want (Poly2): ";
	cin >> n;
	int B[10];
	cout << "Enter elements(Format-c + Bx + Ax^2) :" << endl;
	for (int j = 0; j < n; j++)
	{
		cin >> B[j];
	}
	cout << "First polynomial is \n";
	Display(A, m);
	cout << "\nSecond polynomial is \n";
	Display(B, n);
	int *sum = add(A, B, m, n);
	int size = max(m, n);
	cout << "\nsumuct polynomial is \n";
	Display(sum, size);
	return 0;
}