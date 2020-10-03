#include<iostream>
using namespace std;
int main()
{
    int even=0,odd=0, sum1=0,sum2=0,i,j,n = 0,num[50];
    cout << "Enter how many numbers : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
      	cout <<"Enter "<<i+1<<"th numbers : ";
      	cin>>num[i];
	}
	for(i=0;i<n;i++)
	{
		if(num[i]%2==0)
		{
			even++;
			sum1=sum1+num[i];
		}
		else
		{
			odd++;
			sum2=sum2+num[i];
		}
	}
		cout<<"\nNo of Even numbers: "<<even<<" & No of Odd numbers: "<<odd<<"\n\n";
	cout<<"Sum of even num: "<<sum1<<" & Sum of odd num: "<<sum2;
    return 0;
}
