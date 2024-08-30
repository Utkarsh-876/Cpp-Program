#include<iostream>
using namespace std;

void print()
{
	int a=10,b=1;
	if(++a)
	{
	  cout<<b;
	}
	else
	{
		cout<<++b;
	}
}

void print1()
{
	int a=1, b=2;
	if(a-- >0 && ++b>2)
	{
		cout<<"Stage 1 - inside if"<< endl;
	}
	else
	{
		cout<<"Stage 2- inside else"<<endl;
	}
	cout<<a<<"  "<<b<<endl;
}

void print2()
{
	int num=3;
	cout<<(25*(++num));
}

void print3()
{
	int a=1, b=a++, c= ++a;
	cout<<b<<endl;
	cout<<c<<endl;
}

int main()
{
	print3();
}
