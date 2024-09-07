#include<iostream>
using namespace std;

int main()
{
		int num,temp,temp1=0,temp2=0,temp3=0,temp4=0;
		int positive_len=0, negative_len=0, even_len=0, odd_len=0;		
	//Get user input in array
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	int arr[num-1];
	
	int positive[positive_len], negative[negative_len], odd[odd_len], even[even_len];

	
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
			positive[temp1]=arr[i];
			temp1++;
		}
		else if(arr[i]<0)
		{
			negative[temp2]=arr[i];
			temp2++;
		}
		
		if(arr[i]%2==0)
		{
			even[temp3]=arr[i];
			temp3++;
		}
		else if(arr[i]%2 !=0)
		{
			odd[temp4]=arr[i];
		}
	}

//Find length of all the array
positive_len= *(&positive + 1) - positive;
negative_len= *(&negative + 1) - negative;
even_len= *(&even + 1) - even;
odd_len= *(&odd + 1) - odd; 

cout<<endl<<"Number of Postive numbers :"<<positive_len<<endl;
for(int i=0; i<positive_len; positive_len++)
{
	cout<<positive[i];
}

cout<<endl<<"Number of Negative numbers :"<<negative_len<<endl;
for(int i=0; i<negative_len; negative_len++)
{
	cout<<negative[i];
}

cout<<endl<<"Number of Even numbers :"<<even_len<<endl;
for(int i=0; i<even_len; even_len++)
{
	cout<<even[i];
}

cout<<endl<<"Number of Odd numbers :"<<odd_len<<endl;
for(int i=0; i<odd_len; odd_len++)
{
	cout<<odd[i];
}
}
