#include<iostream>
using namespace std;

void print()
{
	int n,i=1;
	
	cin>>n;
	while(i<=n)
	{
		int j=1;
		int value = i;
		while(j<=i)
		{
			cout<<value<<" ";
			value++;
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
