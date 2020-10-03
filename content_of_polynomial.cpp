#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
  

int search_Content(int arr[], int n) 
{ 
    int content = arr[0]; 

    for (int i = 1; i < n; i++) { 
  
        content = __gcd(content, arr[i]); 
    } 
    return content; 
} 
  
int main() 
{ 
int  n;
	cout << "How many integer coefficients u want: ";
	cin >> n;
	int arr[10];
	cout << "Enter elements(Format- F(x) = amx^m + am-1x^m-1 + ……+a1x + a0) :" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	} 
    cout<<"Content of a polynomial: ";
    cout << search_Content(arr, n); 
    return 0; 
}
