#include<iostream>
using namespace std;

int main()
{
	int num,num1,num2;
	char temp,temp1;
	
	cout<<"Enter no of elements you want to enter :";
	cin>>num;
	
	char arr[num-1];
	
	for(int i=0; i<num; i++)
	{
		cout<<"Enter the element :";
		cin>>temp;
		
		arr[i]=temp;
	}
	
	//getting he positions to swap
	cout<<"Enter the position you want to swap :";
	cin>>num1;
	cout<<endl<<"Enter the position you want to swap with :";
	cin>>num2;
	
	//Swapping the elements
	
	if((num1<=num && num2<=num) && num1!=num2)
	{
		temp1=arr[num1-1];		
		arr[num1-1]=arr[num2-1];
		arr[num2-1]=temp1;
	}
	else{
		cout<<"Invalid entry! Recheck  all the values";
	}
	
	//display array
	for(int i=0; i<num; i++)
	{
		if(i==0)
		cout<<"Elements of array are :" <<endl;
		
		cout<<arr[i] <<endl;
	}
}
