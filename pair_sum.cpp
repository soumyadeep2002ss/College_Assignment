#include <bits/stdc++.h>
using namespace std;

int printPairs(int arr[], int n, int sum)
{
    int count = 0;
    cout<<"\nOutput\n";
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                cout << "(" << arr[i] << ", "
                     << arr[j] << ")" << endl;
}

int main()
{
    int arr[100], i, j, sum, n;
    cout << "sum: ";
    cin >> sum;
    cout << "Enter how many element you want: ";
    cin >> n;

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printPairs(arr, n, sum);
    return 0;
}