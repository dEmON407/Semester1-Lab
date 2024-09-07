#include<iostream>
using namespace std;

int main()
{
	int num1, num2, temp;
	int *ptr1, *ptr2;
	
	cout<<"Enter num1 :";
	cin>>num1;
	cout<<"Enter num2 :";
	cin>>num2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	++*ptr1;
	++*ptr2;
	
	cout<<"\nNew value of num1 is :"<<num1<<endl;
	cout<<"New value of num2 is :"<<num2<<endl;
	
	return 0;
}
