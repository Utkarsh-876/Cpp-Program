#include<iostream>
using namespace std;

void print(int n)
{
	int i=2;
	
	
	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"Not prime "<<i<<endl;
		}
		else
		{
			cout<<"Prime "<<i<<endl;
		}
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
