#include<iostream>
using namespace std;

int main()
{
	int arrSize;
	int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	
	arrSize= *(&arr + 1) - arr;    //End address-start address
	cout<<"Length of array is :"<<arrSize;
	
	        //Alternate method
//	arrSize = sizeof(arr)/sizeof(arr[0]);  //Array size/size of one block
//	cout<<"Length of array is"<<arrSize;
	
	return 0;
}
