#include<iostream>
using namespace std;

bool isEven(int num)
{
	//odd
	if(num&1)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl; 
	cin>>num;
	
	if(isEven(num))
	{
		cout<<"Number is even"<<endl;
	}
	else
	{
		cout<<"Number is odd"<<endl;
	}
}
