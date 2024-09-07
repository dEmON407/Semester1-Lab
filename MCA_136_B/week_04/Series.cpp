#include<iostream>
using namespace std;

int main()
{
	int i,n,num1=0,num2=1,next=0;
	
	cout<<"Enter the number :";
	cin>>n;
	
	for(i=0; i<n; i++)
	{
		if(i==0)
		cout<<num1;
		
//		if(i==1)
//		cout<<num2;
		
		if(i>1)
		{
			next=num1+num2;
			num2=num1;
			num1=next;
			
			cout<<"\n";
			cout<<num1;
		}
	}
	
}
