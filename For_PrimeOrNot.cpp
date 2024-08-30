#include<iostream>
using namespace std;

int print(int num)
{
	int sum=0;
	while(num!=0)
	{
		int digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	cout<<"Sum of digit is "<<sum<<endl;
	bool isprime=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime==0)
	{
		cout<<"Not a prime number"<<endl;
	}
	else
	{
		cout<<"Is a prime number"<<endl;
	}
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	print(num);
}
