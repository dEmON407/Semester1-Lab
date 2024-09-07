#include<iostream>
using namespace std;

int main()
{
	int num;
	char temp;
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	char arr[num-1];
	
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
}
