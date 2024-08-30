#include<iostream>
using namespace std;

int SumOfEven(int num)
{
	int sum=0;
	while(num!=0)
	{
		int digit=num%10;
		num=num/10;
		if(digit%2==0)
		{
			sum=sum+digit;
		}
	}
	return sum;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Sum of Even digit is "<<SumOfEven(num);
}
