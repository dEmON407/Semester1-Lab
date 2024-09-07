#include<iostream>
using namespace std;

int main()
{
	int num,num1,temp,largest=0, second;
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	int arr[num-1];

//Input elements in array

	for(int i=0; i<num; i++)
	{
		cout<<"Enter the element "<<i+1<<" :";
		cin>>temp;
		
		arr[i]=temp;
	}
	
//Second Greatest Element
//	int arrSize = sizeof(arr)/sizeof(arr[0]);
	
//	cout<<"Len"<<num<<endl;
	
	for(int i=0; i<num; i++)
	{
		num1=arr[i];
		
		if(num1>largest)
		{
			largest=num1;
//			cout<<"Largest :"<<largest<<endl;
		}
	}
	
	for(int i=0; i<num; i++)
	{
		num1=arr[i];
		
		if(num1<largest && num1>second)
		{
			second=num1;
//			cout<<"second :"<<second<<endl;
		}
	}
	
	cout<<"Second largest number is :"<<second;
}
