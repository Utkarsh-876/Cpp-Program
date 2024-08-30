#include<iostream>
using namespace std;

int print(int num)
{
	int count=0;
	while(num!=0)
	{
		if(num&1)
		{
			count++;
		}
		num=num>>1;
		cout<<count;
	}
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	print(num);
}
