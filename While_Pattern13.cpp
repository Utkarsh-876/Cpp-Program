#include<iostream>
using namespace std;

void print()
{
	int n,i=1;
	cin>>n;
	while(i<=n)
	{
		int space = n-i;
		while(space)
		{
			cout<<"  ";
			space =space-1;
		}
		int j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			j=j+1;
		}
		int start=i-1;
		while(start)
		{
			cout<<start<<" ";
			start=start-1;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	print();
}
