#include<iostream>
using namespace std;

int main()
{

int matrix1[2][2], matrix2[2][2], Solution[2][2], temp, choice;

cout<<"For matrix 1:"<<endl;

for(int i=0; i<2; i++)
{
	for(int j=0; j<2; j++)
	{
		cout<<"Enter the number at position "<<i<<j<< " :";
		cin>>temp;
		matrix1[i][j]=temp;
	}
}
	cout<<"For matrix 2:"<<endl;

for(int i=0; i<2; i++)
{
	for(int j=0; j<2; j++)
	{
		cout<<"Enter the number at position "<<i<<j<<" :";
		cin>>temp;
		matrix2[i][j]=temp;
	}
}

//print matrix 1
cout<<endl<<"Matrix 1:"<<endl;
for(int i=0; i<2; i++)
{
	cout<<endl;
	
	for(int j=0; j<2; j++)
	{		
		cout<<matrix1[i][j]<<" ";			
	}
}

//Print matrix 2
cout<<endl<<"\nMatrix 2:"<<endl;
for(int i=0; i<2; i++)
{
	cout<<endl;
	
	for(int j=0; j<2; j++)
	{		
		cout<<matrix2[i][j]<<" ";			
	}
}

cout<<endl<<"\n";
cout<<"What do you want to do :"<<endl;
cout<<"1) Addition"<<endl;
cout<<"2) Multiplication"<<endl;

cin>>choice;

if(choice==1)
{
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
//			cout<<"matrix 1 :"<<endl;
//			cout<<matrix1[i][j]<<endl;
//			cout<<"matrix 2 :"<<endl;
//			cout<<matrix2[i][j];
			
			Solution[i][j]=matrix1[i][j]+matrix2[i][j];
		}
	}
}
else if(choice==2)
{
	for(int i=0; i<2; i++)
	{
		for(int j=0; j<2; j++)
		{
			Solution[i][j]=0;
			for(int k=0; k<2; k++)
			{
				Solution[i][j]+=matrix2[k][i]*matrix1[j][k];
			}
		}
	}
}
else
{
	cout<<"Invalid Input! Recheck all the entry";
}

//Print the array
cout<<endl<<"Final matrix is :";

for(int i=0; i<2; i++)
{
	cout<<endl;
	
	for(int j=0; j<2; j++)
	{		
		cout<<Solution[i][j]<<" ";			
	}
}
	return 0;
}
