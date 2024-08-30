#include<iostream>
using namespace std;

void print()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	if(num>5)
	{
		cout<<"Yes number is greater then 5"<<endl;
	}
	else
	{
		cout<<"Number is less than 5";
	}
}

int main()
{
	print();
}
