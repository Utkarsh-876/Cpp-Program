#include<iostream>
using namespace std;

void print()
{
	int nn,i=1;
	cin>>n;
	
	while(i<=n)
	{
		int j=1;
		char ch='A'+i+j-2;
		while(j<=n)
		{
			cout<<ch<<" ";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}

int main()
{
	print();
}
