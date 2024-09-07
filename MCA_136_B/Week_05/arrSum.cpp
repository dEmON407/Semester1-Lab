#include<iostream>
using namespace std;

int main()
{
	int num,temp,sum=0;
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	int arr[num-1];
	
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the element :";
		cin>>temp;
		
		arr[i]=temp;
	}
	
	for(int i=0; i<num; i++)
	{
		if(i==0)
		cout<<"Elements of array are :" <<endl;
		
		cout<<arr[i] <<endl;
	}
	
	for(int i=0; i<num; i++)
	{
		sum+=arr[i];
//		cout<<sum;
	}
	
	cout<<"Sum of given numbers is :"<<sum;
}
