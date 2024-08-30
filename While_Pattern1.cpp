/*
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<iostream>
using namespace std;

/*void print()
{
	int i=1,n;
	cout<<"Enter the n"<<endl;
	cin>>n;
	
	while(i<=n)
	{
		int j=1;
		while(j<=n)
		{
			cout<<"* ";
			j++;
		}
		cout<<endl;
	    i++;
	}
	
}*/

void println()
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=n)
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
	println();
	//print();
}
