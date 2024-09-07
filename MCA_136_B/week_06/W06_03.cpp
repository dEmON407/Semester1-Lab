#include<iostream>
using namespace std;

int main()
{
	int *ptr1;
	int num1=20;
	
	
	ptr1= &num1;
	cout<<"Address of num1 is :"<<ptr1<<endl;
	cout<<"Value of num1 is :"<<*ptr1;
	
	return 0;
}
