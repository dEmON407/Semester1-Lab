#include<iostream>
using namespace std;

int main()
{
	string *ptr1;
	string word;
	
	cout<<"Enter Your Name :";
	cin>>word;
	
	ptr1 = &word;
	
	cout<<"\nYour name is :"<<*ptr1;
	
	return 0; 
}
