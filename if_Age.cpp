#include<iostream>
using namespace std;

int print(int age)
{
	if(age>50)
	{
		cout<<"You are Old"<<endl;
	}
	else if(age<20)
	{
		cout<<"You aare Child"<<endl;
	}
	else
	{
		cout<<"You are young"<<endl;
	}
	
}

int main()
{
	int age;
	cout<<"Enter the Age"<<endl;
	cin>>age;
	
	print(age);
	
}
