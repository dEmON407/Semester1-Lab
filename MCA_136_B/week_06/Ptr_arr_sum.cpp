#include<iostream>
using namespace std;

int main()
{
	int *ptr1;
	int length,sum=0;


//Enter numbers of elements in array	
	cout<<"Enter the number of elements you want to enter:\n";
	cin>>length;
	
	int arr[length-1];

//Enter Elements in array	
	cout<<"enter the elements:\n";
	cin>>arr[0];
	
	ptr1=arr;
	++ptr1;
	
	for(int i=0; i<length-1; i++)
	{
		cin>>*ptr1;
		ptr1++;
	}
	
//Add elements in array	
	ptr1=arr;

	for(int i=0; i<length; i++)
	{
		sum+=*ptr1;
		++ptr1;	
	}
	
//Printing sum of array
	cout<<"Sum of all elements in array is :"<<sum;	
	
	return 0;
}
