/*#include<iostream>
using namespace std;
int print(int num)
{
	int a=0;
	int b=1;
	cout<<a<<"\n"<<b<<endl;
	
	for(int i=1;i<=num;i++)
	{
		int nextnumber=a+b;
		cout<<nextnumber<<endl;
		
		a=b;
		b=nextnumber;
		
	}
}


int main()
{
	int num;
	cout<<"Enter the number  "<<endl;
	cin>>num;
	
	print(num);
}*/

#include<iostream>
using namespace std;

int fibonacci(int num)
{
	int a=0,b=1,NextNumber;
	cout<<a<<"\n"<<b<<endl;
	for(int i=1;i<num;i++)
	{
		NextNumber=a+b;
		cout<<NextNumber<<endl;
		
		a=b;
		b=NextNumber;
		
	}
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	fibonacci(num);
	
}
