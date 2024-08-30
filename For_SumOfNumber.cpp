#include<iostream>
using namespace std;

void print()
{
	int num,sum=0;
	cout<<"Enter the number "<<endl;
	cin>>num;
	for(int i=0;i<=num;i++)
	{
		sum=sum+i;
	}
	cout<<"Sum of all number is :- "<<sum;
}

int main()
{
	print();
}
