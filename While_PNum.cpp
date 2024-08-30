#include<iostream>
using namespace std;
 
int print(int n)
{
	int i=1;
	while(i<=n)
	{
		cout<<i<<endl;
		i=i+1;
	}
}

int main()
{
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	
	print(n);
}
