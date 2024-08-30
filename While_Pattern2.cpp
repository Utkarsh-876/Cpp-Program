#include<iostream>
using namespace std;
/*

*
* *
* * *
* * * *
* * * * *


void print()
{
	int i=1,n;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<"* ";
			j++;
		}
		cout<<endl;
		i++;
	}
}*/

//==============================================================

/*

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

/*void print()
{
	int n,i=1;
	cin>>n;
	int count = 1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			count=count+1;
			j++;
		}
		cout<<endl;
		i++;
	}
}*/

//==============================================================

void print()
{
	int n,i=1;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<i<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	print();
}
