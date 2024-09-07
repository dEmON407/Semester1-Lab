#include<iostream>
using namespace std;

int main()
{
	int num, num1, sum;
	int temp, temp1, temp3;
	
	cout<<"Enter no of elements you want to enter in first array :";
	cin>>num;
	
	int arr[num-1];
	
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the element :";
		cin>>temp;
		
		arr[i]=temp;
	}
	
	//Display Elements of array
	
	for(int i=0; i<num; i++)
	{
		if(i==0)
		cout<<"Elements of the first array are :" <<endl;
		
		cout<<arr[i] <<endl;
	}

//Second Array Input and display

//	int arr1[num1-1];

	cout<<"Enter no of elements you want to enter in second array :";
	cin>>num1;
	
	int arr1[num1-1];
	
	for(int i=0; i<num1; i++)
	{
		cout<<"Enter the element :";
		cin>>temp1;
		
		arr1[i]=temp1;
	}
	
	for(int i=0; i<num1; i++)
	{
		if(i==0)
		cout<<"Elements of the second array are :" <<endl;
		
		cout<<arr1[i] <<endl;
	}
	
	sum=num+num1;
	int sorted[sum];
	
	for(int i=0; i<num; i++)
	{
		for(int j=0; j<num1; j++)
		{
			if(arr[i]<arr1[j])
			{
				sorted[temp3]=arr1[j];
				temp3++;
			}
			else if(arr[i]>arr1[j])
			{
				sorted[temp3]=arr[i];
				temp3++;
			}
			else if(arr[i]==arr1[j])
			{
				sorted[temp3]=arr[i];
				++temp3;
				
				sorted[temp3]=arr[j];
				++temp3;
			}
		}
	}
	
	for(int i=0; i<sum; i++)
	{
		if(i==0)
		cout<<"Elements of the final array are :" <<endl;
		
		cout<<sorted[i] <<endl;
	}
	
}
