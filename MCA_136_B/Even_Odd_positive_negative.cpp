#include<iostream>
using namespace std;

int main()
{
		int num,temp;
		int positive=0, negative=0, even=0, odd=0;	
			
	//Get user input in array
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	int arr[num-1];

	
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the element :";
		cin>>temp;
		
		arr[i]=temp;
	}
	
	//Display the array
	
	for(int i=0; i<num; i++)
	{
		if(i==0)
		cout<<"Elements of array are :" <<endl;
		
		cout<<arr[i] <<endl;
	}
	
	//Find all +ve and -ve numbers in array
	for(int i=0; i<num; i++)
	{
		if(arr[i]>=0)
		{
			++positive;
		}
		else if(arr[i]<0)
		{
			++negative;
		}
		
		if(arr[i]%2==0)
		{
			++even;
		}
		else if(arr[i]%2 !=0)
		{
			++odd;
		}
	}


cout<<endl<<"Number of Postive numbers :"<<positive<<endl;

cout<<endl<<"Number of Negative numbers :"<<negative<<endl;

cout<<endl<<"Number of Even numbers :"<<even<<endl;

cout<<endl<<"Number of Odd numbers :"<<odd<<endl;

}
