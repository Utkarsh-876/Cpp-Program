#include<iostream>
using namespace std;
int factorial(int n)
{
	int fact=1;
	for(int i=0;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

int nCr(int n,int r)
{
	int num=factorial(n);
	int deno=(factorial(r)*factorial(n-r));
	
	return num/deno;
}

int main()
{
	int n,r;
	cout<<"Enter the value of n and r"<<endl;
	cin>>n>>r;
	
	cout<<"Answer is "<<nCr(n,r);
}

