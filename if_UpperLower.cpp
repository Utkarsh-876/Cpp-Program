#include<iostream>
using namespace std;

void print()
{
	char ch;
	cout<<"Enter the character"<<endl;
	cin>>ch;
	
	if(ch>=65 && ch<=90)
	{
		cout<<"This is upper case"<<endl;
	}
	else if(ch>=97 && ch<=122)
	{
		cout<<"This is lower case"<<endl;
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"This is Numeric"<<endl;
	}
}

int main()
{
	print();
}
