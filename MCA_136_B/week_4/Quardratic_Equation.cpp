#include<iostream>
using namespace std;

int main()
{
	int a,b,c,root1,root2,discriminant;
	cout<<"Enter value of a :";
	cin>>a;
	cout<<endl;
	
	cout<<"Enter value of b :";
	cin>>b;
	cout<<endl;
	
	cout<<"Enter value of c :";
	cin>>c;
	cout<<endl;
		
	discriminant= b*b - 4*a*c;
//	cout<<discriminant<<endl;

if(discriminant<0)
cout<<"Imaginary Roots";
else{

	root1=((-b + sqrt(discriminant))/2*a);
	root2=((-b - sqrt(discriminant))/2*a);
	
	cout<<" Roots of the given Quardratic equation are :" <<root1<<endl<<root2;
	
	return 0;
	}
}
