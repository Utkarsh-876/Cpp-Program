#include<iostream>
using namespace std;

void print()
{
	for(int i=0;i<=5;i++)
	{
		cout<<i<<" ";
		i++;
	}
}

void print1()
{
	for(int i=0;i<=5;i--)
	{
		cout<<i<<" ";
		i++;
	}
}

void print2()
{
	for(int i=0;i<=15;i+=2)
	{
		cout<<i<<" ";
		if(i&1)
		{
			continue;
		}
		i++;
	}
}

void print3()
{
	for(int i=0;i<5;i++)
	{
		for(int j=i;i<=5;j++)
		{
			cout<<i<<" "<<j<<endl;
			break;
		}
	}
}

void print4()
{
	for(int i=0;i<5;i++)
	{
		for(int j=i;j<5;j++)
		{
			if(i+j==0)
			{
				break;
			}
			cout<<i<<" "<<j<<endl;
		}
	}
}

int main()
{
	print4();
}
