/*
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5*/

#include<iostream>
using namespace std;

/*void print()
{
	int i=1,n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<j<<" ";
		     j++;
		}
		cout<<endl;
		i++;
	}
}*/
//==================================================================
/*

1 2 3
4 5 6
7 8 9

*/
void print1()
{
	int n;
	cin>>n;
	int count=1,  i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<count<<" ";
			count=count + 1;
			j++;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	print1();
}
