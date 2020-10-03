#include<iostream>
using namespace std;
int main()
{
int a,num,sum=0;
cout<<"Enter any num : ";
cin>>num;
while(num>0)
{
a=num%10;
num=num/10;
sum=sum+a;
}
cout<<"\nSum of digits: "<<sum;
return 0;
}
