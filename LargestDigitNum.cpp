#include<iostream>
using namespace std;

int isLarge(int num)
{
	int large;
	while(num!=0)
	{
		int digit=num%10;
		if(digit>large)
		{
			large=digit;
		}
		num=num/10;
	}
	return large;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Largest digit in number is "<<isLarge(num);
}
