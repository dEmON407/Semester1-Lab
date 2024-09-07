#include<iostream>
using namespace std;

int main()
{
	string *ptr1, *ptr2;
	string str1, str2;
	
	cout<<"Enter the first string :";
	cin>>str1;
	
	cout<<"Enter the second string :";
	cin>>str2;

	ptr1=&str1;
	ptr2=&str2;
	
	cout<<"Concatination of two strings is :"<<*ptr1 + *ptr2;
	
	return 0;	
}
