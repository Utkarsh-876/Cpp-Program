#include<iostream>
using namespace std;

void print()
{
	int a , b;
	cout<<"Enter a  and b"<<endl;
	cin>>a>>b;
	if(a>b)
	{
		cout<<"Answer is a"<<endl;
	}
	else if(a==b)
	{
		cout<<"Answer are both"<<endl;
	}
	else
	cout<<"Answe is b";
}
int main()
{
	print();
}
