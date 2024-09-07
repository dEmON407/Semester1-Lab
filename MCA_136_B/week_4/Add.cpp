#include<iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout<<"Enter Number1 :";
	cin>>num1;
	cout<<"Enter number2 :";
	cin>>num2;
	
	for(int i=0; i<num2; i++)
	{
		num1=++num1;
	}
	
	cout<<num1;
	return 0;
}
