#include<iostream>
using namespace std;

int main()
{
	int num1, num2, temp;
	int *ptr1, *ptr2, *ptr3;
	
	cout<<"Enter number in num1 :";
	cin>>num1;
	
	cout<<"Enter number in num2 :";
	cin>>num2;
	
	ptr1= &num1;
	ptr2= &num2;
	
    temp= *ptr1;
	*ptr1= *ptr2;
	*ptr2= temp;
	
	cout<<"\nNumber at num1 :"<<num1<<endl;
	cout<<"Number at num2 :"<<num2<<endl;
	
	return 0;
}
