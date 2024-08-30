#include<iostream>
using namespace std;

int print(int num)
{
	int prod=1;
	int sum=0;
	
	while(num!=0)
	{
		int digit=num%10;
		prod=prod*digit;
		sum=sum+digit;
		
		num=num/10;
	}
	 int sub=prod-sum;
	 cout<<"Substraction is "<<sub;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	print(num);
}
