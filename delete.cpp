#include <iostream>
using namespace std;
int main()
 {
   int arr[100],size,loc,i,count=0;
   cout<< "Enter the size of an array: ";
   cin >>size;
   cout<< "Enter the element in an array \n";
   for(i=0;i<size;i++) 
   {
    cin>>arr[i];
   }
   cout<< "Enter the position: ";
   cin >>loc;
   for(i=loc-1;i<size;i++)
    {
      arr[i]=arr[i+1];
    }
   size--;  
   cout<<"Array after deleting \n";          
  for(i=0;i<size;i++)
   {
   cout<<" "<<arr[i];
   }
  return 0;
 }
