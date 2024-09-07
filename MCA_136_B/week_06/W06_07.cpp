#include<iostream>
using namespace std;

int main()
{
	int *ptr1, *ptr2;
	int length;
//	int arr[20];
	
	cout<<"Enter the number of elements you want to enter:\n";
	cin>>length;
	
	int arr[length-1];
	
	cout<<"enter the elements:\n";
	cin>>arr[0];
	
	ptr1=arr;
//	ptr2=arr;
	++ptr1;
	
	for(int i=0; i<length-1; i++)
	{
		cin>>*ptr1;
		ptr1++;
	}
	
	cout<<"Print elements :\n";
	
	ptr1=arr;
	
//	cout<<*ptr1;


	for(int i=0; i<length; i++)
	{
		cout<<*ptr1;
		++ptr1;	
	}
	
	return 0;
}
