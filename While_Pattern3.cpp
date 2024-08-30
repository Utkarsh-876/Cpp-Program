#include<iostream>
using namespace std;
/*

1
2 3
4 5 6
7 8 9 10

*/
void print()
{
	int n,i=1;
	cin>>n;
	int count =1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
			cout<<count<<" ";
			count=count+1;
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

