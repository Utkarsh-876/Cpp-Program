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
	cout<<"Sum of Digit is "<<sum;
	return 0;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	print(num);
	
}
