#include<iostream>
using namespace std;

int print(int a,int b)
{
	char op;
	cout<<"choose the operation uhhh want"<<endl;
	cin>>op;
	
	switch(op)
	{
		case '+': cout<<(a+b)<<endl;
		break;
		
		case '-': cout<<(a-b)<<endl;
		break;
		
		case '*': cout<<(a*b)<<endl;
		break;
		
		case '/':cout<<(a/b)<<endl;
		break;
		
		case'%':cout<<(a%b)<<endl;
		break;
		
		default: cout<<"Enter the valid opration"<<endl;
		break;
	}
}

int main()
{
	int a,b;
	cout<<"Enter the value of a"<<endl;
	cin>>a;
	
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	
	print(a,b);
}
