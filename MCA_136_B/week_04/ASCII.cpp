#include<iostream>
using namespace std;

int main()
{
char ch;

cout<<"Enter the Character :";
cin>>ch;

if((int(ch)<48) || ((int(ch)>57) && (int(ch)<65)) || ((int(ch)>90) && (int(ch)<97)) || ((int(ch)>122) && (int(ch)<128))){
	cout<<"Entered chracter is a special symbol" <<endl;	
}
else if((int(ch)>64) && (int(ch)<91)){
	cout<<"Entered character is a Capital Letter" <<endl;
}
else if((int(ch)>96) && (int(ch)<123)){
	cout<<"Entered chracter is a small case Letter" << endl;
}
else if((int(ch)>47) && (int(ch)<58)){
	cout<<"Entered character is a Number" <<endl;
}
return 0;
}
