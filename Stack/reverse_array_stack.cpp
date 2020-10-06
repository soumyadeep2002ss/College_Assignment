#include <iostream>
#include <stack>
using namespace std;

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
void reverseitems(int arr[], int n)
{
	stack<int> stack;
	for (int i = 0; i < n; i++) {
		stack.push(arr[i]);
	}
	int index = 0;
	while (!stack.empty())
	{
		arr[index++] = stack.top();
		stack.pop();
	}
}
int main()
{
    int arr[50],n;
	cout<<"How many elements u want: ";
    cin>>n;
     cout <<"Enter elements :" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	reverseitems(arr, n);
	print(arr, n);
	return 0;
}