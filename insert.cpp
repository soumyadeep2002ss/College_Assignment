#include <iostream>
using namespace std;
 int main() {
   int arr[1000],size,loc,val,i,temp;
   cout<<"Enter the size of an array: ";
   cin >>size;
   cout<<"Enter the elements in an array \n";
   for(i=0;i<size;i++)
    {
      cin>>arr[i];
    }
   cout<<"Enter a position: ";
   cin>>loc;
   cout<<"Enter a value to insert: ";
   cin>>val;
   for(i=size;i>=loc;i--) 
  	{
      arr[i]=arr[i-1];
   	}
   size++;
   arr[loc-1]=val;
   cout<< "Array after inserting a new value \n";
 	for(i= 0;i<size;i++)
	  {
      cout<<arr[i]<<" ";
      }
   return 0;
 }
