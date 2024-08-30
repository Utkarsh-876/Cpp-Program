#include<iostream>
using namespace std;

int sum(int a,int b)
{
	int sum=a+b;
	return sum;
}

int sum(int a,int b,int c)
{
	int sum=a+b+c;
	return sum;
}


int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	
	cout<<"Sum of two digit is "<<sum(a,b)<<endl;
	//cout<<"Sum of three digit is "<<sum(a,b,c);
}
