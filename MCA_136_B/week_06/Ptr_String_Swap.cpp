//#include<iostram>
//using namespace std;
//
//int main()
//{
//	int length;
//	char *ptr1, *ptr2;
//	char temp1, temp2;
//	
//	cout<<"Enter the number of elements you want to enter :";
//	cin>>length;
//	
//	char arr[length];
//	
//	for(int i=0; i<length; i++)
//	{
//		cout<<"Enter the element at index "<<i<<" :";
//		cin>>temp1;
//		
//		arr[i]=temp1;
//		
//		ptr1= &temp1;
//	}
//}

#include <bits/stdc++.h>
using namespace std;


void reverseString(char* str)
{
int l, i;
char *begin_ptr, *end_ptr, ch;

// Get the length of the string
l = strlen(str);

// Set the begin_ptr initially to start of string
begin_ptr = str;

//Setting end_ptr initially to the end

end_ptr = str + l - 1;

// Swap the char from start and end index using begin_ptr and end_ptr
for (i = 0; i < (l - 1) / 2; i++) {

	// swap character
	ch = *end_ptr;
	*end_ptr = *begin_ptr;
	*begin_ptr = ch;

	// update pointers positions
	begin_ptr++;
	end_ptr--;
}
}

// Driver code
int main()
{

// Get the string
char str[100] = "ManasMaheshwari";
cout<<"Enter a string: "<<str<<endl;

// Reverse the string
reverseString(str);

// Print the result
printf("Reverse of the string: %s\n", str);

return 0;
}



