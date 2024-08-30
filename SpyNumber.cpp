#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	int sum=0;
	int product=1;
	int digit;
	
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		product=product*digit;
		num/=10;
	}
	if(sum==product)
	{
		cout<<"number is Spy number"<<endl;
	}
	else
	{
		cout<<"Number is not spy number"<<endl;
	}
}
