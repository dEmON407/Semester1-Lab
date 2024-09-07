#include<iostream>
using namespace std;

int main()
{
	int num, i, j, k;
	
	cout<<"Enter value of n :";
	cin>>num;
	cout<<"Prime numbers between 1 and " <<num <<" are :" <<endl;
	
	for(i=1; i<= num; i++)
	{
		if(i==1 || i==0)
		{
			continue;
		}
		k=1;
		
		for(j=2; j<=i/2; j++)
		{
			if(i%j ==0){
				k=0;
				break;
			}
		}
		
		if(k==1){
			cout<<"\n" << i;
		}
	 } 
		
		return 0;
}
