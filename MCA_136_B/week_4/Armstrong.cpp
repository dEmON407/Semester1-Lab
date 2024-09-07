#include<iostream>
using namespace std;

int main()
{
	int num,sum=0, temp, check;
	
	cout<<"Enter The number you want to check :";
	cin>>num;
	check=num;
	cout<<endl;
	
	for(int i=0; i<3; i++)
	{
		temp=num%10;
		temp= temp*temp*temp;
		sum+=temp;
		num=num/10;
	}
	
	if(sum==check){
		cout<<"Entered number is Armstrong number"<<endl;
	}
	else{
		cout<<"Entered number is not armstrong number";
	}
	
	return 0;
}

