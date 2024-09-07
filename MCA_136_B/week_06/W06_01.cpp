#include<iostream>
using namespace std;

int main()
{
	int num1, num2, sum;
	int *ptr1, *ptr2;
	
	cout<<"Enter number 1 :";
	cin>>num1;
	cout<<"Enter number 2 :";
	cin>>num2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	sum = *ptr1 + *ptr2;
	
	cout<<"Addition of two numbers is :"<<sum;
	
	return 0;
}
