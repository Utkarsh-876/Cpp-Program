#include<iostream>
using namespace std;

void print()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
//	int r=num%2;
	if(num % 2 == 0)
	{
		cout<<"Even"<<endl;
	}
	else
	{
		cout<<"Odd"<<endl;
	}
}

int main()
{
	print();
}
