#include<iostream>
using namespace std;

void print()
{
	int a;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	
	if(a>0)
	{
	  cout<<"Number is Positive"<<endl;
	}
	else if(a<0)
	{
		cout<<"Number is Negative"<<endl;
	}
	else
	{
		cout<<"Number is zero";
	}
}

int main()
{
	print();
}
