#include<iostream>
using namespace std;

void print()
{
	int n,i=1;
	cin>>n;
	while(i<=n)
	{
		int space =i-1;
		while(space)
		{
			cout<<"  ";
			space=space+1;
		}
		int j=1;
		int value=n-i+1;
		while(j<=i)
		{
			cout<<"* ";
			value=value-1;
			j--;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	print();
}
