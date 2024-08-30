/*#include<iostream>
using namespace std;

int palindrome(int num)
{
	int digit,rev=0;
	int n=num;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}
	
	if(n==rev)
	{
		cout<<"Number is palindrome"<<endl;
	}
	else
	{
		cout<<"Number is not palindrome"<<endl;
	}
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	palindrome(num);
}*/

#include<iostream>
using namespace std;

int palindrome(int num)
{
    int n=num;
	int digit,rev=0;
	while(num!=0)
	{
		digit=num%10;
		rev=(rev*10)+digit;
		num=num/10;
	}	
	
	cout<<"The reverse of number is "<<rev<<endl;
	
	if(n==rev)
	{
		cout<<"Number is palindrome"<<endl;
	}
	else
	{
		cout<<"Number is not palindrome"<<endl;
	}
}

int main()
{
	int num;
	cout<<"Enter the positive number"<<endl;
	cin>>num;
	
	palindrome(num);
	
}
