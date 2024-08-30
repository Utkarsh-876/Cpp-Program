#include<iostream>
using namespace std;
int print(int num)
{
    for(int i=0;i<=num;i++)
	{
	   num=num%2;
	   cout<<num;	
	}	
	
}

int main()
{
	int num;
	cout<<"Number Enter kr jaha tk Even number Print karna hai "<<endl;
	cin>>num;
	
	print(num);
}
