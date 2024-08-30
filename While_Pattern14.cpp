#include<iostream>
using namespace std;
/*

1 * * * * * * * * 1
1 2 * * * * * * 2 1
1 2 3 * * * * 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/
int print(int n)
{
	int i=1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<j<<" ";
			j=j+1;
		}
		int star=n-i;
		while(star)
		{
			cout<<"* ";
			star=star-1;
		}
		int star1=n-i;
		while(star1)
		{
			cout<<"* ";
			star1=star1-1;
		}
		int k=i;
		while(k>=1)
		{
			cout<<k<<" ";
			k=k-1;
		}
		cout<<endl;
		i++;
	}
}

int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	print(n);
}
