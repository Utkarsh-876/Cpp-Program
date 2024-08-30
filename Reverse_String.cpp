#include<iostream>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string"<<endl;
	cin>>str;
	cout<<"Your string is "<<endl;
	str=string(str.rbegin(),str.rend());
	cout<<"Reverse string is "<<str<<endl;
	return 0;
}
