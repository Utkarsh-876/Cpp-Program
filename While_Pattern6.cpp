#include<iostream>
using namespace std;
/*

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

*/
void print()
{
	int n,i=1;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		char ch='A'+i-1;
		while(j<=n)
		{
			cout<<ch<<" ";
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
