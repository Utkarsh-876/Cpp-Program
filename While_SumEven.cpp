#include<iostream>
using namespace std;

void print()
{
	int n,i=2,sum=0;
	cout<<"Enter the n"<<endl;
	cin>>n;
	
	while(i<=n)
	{
		sum=sum+i;
		i=i+2;
	}
	cout<<"Sum is "<<sum;
}

int main()
{
	print();
}
