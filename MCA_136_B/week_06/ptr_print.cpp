#include<iostream>
using namespace std;

int main()
{
	char *ptr1, *ptr2;
	int length;
	char temp1, temp2;
	
	cout<<"Enter the number of elements you want to enter :";
	cin>>length;
	
	char arr[length];
	
	for(int i=0; i<length; i++)
	{
		cout<<"Enter the element at index "<<i<<" :";
		cin>>temp1;
		
		ptr1= &temp1;
		arr[i]=*ptr1;
	}
	
	cout<<"Elements of the array are :";
	
	for(int i=0; i<length; i++)
	{
		cout<<arr[i];
	}
	
	return 0;
}
