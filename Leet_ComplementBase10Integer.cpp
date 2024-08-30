#include<iostream>
using namespace std;
int print(int num)
{
	int m=num;
	int mask=0;
	if(num==0)
	{
		return 1;
	}
	while(m!=0)
	{
		mask=mask<<1|1;
		m=m>>1;
	}
	int ans=(~num)&mask;
	cout<<ans;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	print(num);
	
}
