#include<iostream>
using namespace std;

int print(int num)
{
	int ans=0;
    while(num!=0)
    {
    	int digit=num%10;
    	ans=ans*10+digit;
    	num=num/10;
	}
	cout<<ans;
	
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	print(num);
}
