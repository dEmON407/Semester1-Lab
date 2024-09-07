#include <iostream>
using namespace std;

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
    
    while(i < n2)
        arr3[k++] = arr1[i++];
        
    while(j<n2)
        arr3[k++] = arr2[j++];
}

int main()
{
//     int n1,n2;
// 	int temp1, temp2, temp3;
	
// 	//Enter the elementsin array1      
	
// 	cout<<"Enter no of elements you want to enter :";
// 	cin>>n1;
	
// 	int arr1[n1-1];
	
	
// 	//Enter elements in array1
	
// 	for(int i=0; i<n1; i++)
// 	{
// 		cout<<"Enter the element :";
// 		cin>>temp1;
		
// 		arr1[i]=temp1;
// 	}
	
	
// 	//Display Elements of array 1
	
// 	for(int i=0; i<n1; i++)
// 	{
// 		if(i==0)
// 		cout<<"Elements of array are :" <<endl;
		
// 		cout<<arr1[i] <<endl;
// 	}
	
	
// 		//Enter the elementsin array2      
	
// 	cout<<"Enter no of elements you want to enter :";
// 	cin>>n2;
	
// 	int arr2[n2-1];
	
	
// 	//Enter elements in array2
	
// 	for(int i=0; i<n2; i++)
// 	{
// 		cout<<"Enter the element :";
// 		cin>>temp2;
		
// 		arr2[i]=temp2;
// 	}
	
	
// 	//Display Elements of array2
	
// 	for(int i=0; i<n2; i++)
// 	{
// 		if(i==0)
// 		cout<<"Elements of array are :" <<endl;
		
// 		cout<<arr2[i] <<endl;
// 	}

//     int arr3[n1+n2];
    
//     mergeArrays(arr1, arr2, n1, n2, arr3);
    
//     cout<<"Array after merging" <<endl;
    
//     for(int i=0; i<n1+n2; i++)
//         cout<<arr3[i]<<" ";

    int arr1[] = {11,15,22,96};
    int n1 = sizeof(arr1)/ sizeof(arr1[0]);
    int arr2[] = {2,4,6,8};
    int n2 = sizeof(arr2)/ sizeof(arr2[0]);
    
    int arr3[n1+n2];
    
    mergeArrays(arr1, arr2, n1, n2, arr3);
    cout<<"Array after merging"<<endl;
    
    for(int i=0; i<n1+n2; i++)
        cout<<arr3[i]<<" ";

    return 0;
}
