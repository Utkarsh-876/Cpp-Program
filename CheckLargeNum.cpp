#include<iostream>
using namespace std;

int main()
{
	int num;
	int large=0;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	while(num!=0)
	{
		int a=num%10;
		if(a>large)
		{
			large=a;
		}
		num=num/10;
	}
	cout<<"The largest number is "<<large<<endl;
}
