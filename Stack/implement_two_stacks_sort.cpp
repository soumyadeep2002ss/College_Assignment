#include<iostream>
#define size 10
using namespace std;

class stack
{
	int a[size];
	int top1,top2;
	public:
		stack()
		{
			top1=-1;
			top2=size;
		}
		void push1(int);
		void push2(int);
		void display_stack_1();
		void display_stack_2();
};

void stack::push1(int element)
{
	if(top1<top2-1)
	a[++top1]=element;
	else cout<<"stack is full\n";
}

void stack::push2(int element)
{
	if(top1<top2-1)
	a[--top2]=element;
	else cout<<"stack is full\n";
	
}
void stack::display_stack_1()
{
	cout<<"stack 1 (Even Numbers) \n";
    cout << "Enter elements: \n";
	for(int i=top1;i>=0;i--) 
	cout<<a[i]<<" ";
	cout<<endl;
}
void stack::display_stack_2()
{
	cout<<"stack 2 (Odd Number)\n";
    cout << "Enter elements: \n";
	for(int i=top2;i<size;i++) 
	cout<<a[i]<<" ";
	cout<<endl;
}
int main()
{
	stack s;
	int n;    
	cout<<"Enter the total number of elements: ";
	cin>>n;
	int x;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x%2)   
		s.push2(x);
		else s.push1(x);
	}
	 s.display_stack_1();
	 s.display_stack_2();
	 
	return 0;
}