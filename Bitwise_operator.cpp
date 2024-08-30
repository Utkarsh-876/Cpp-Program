#include<iostream>
using namespace std;
 
void print()
{
	int a=4,b=6;
	
	cout<<" a&b= "<< (a&b)<<endl;
	cout<<" a|b= "<< (a|b)<<endl;
	cout<<" ~a= "<< (~a)<<endl;
	cout<<" a^b= "<< (a^b)<<endl;
	
	
	cout<<(a<<b)<<endl;
	cout<<(a>>b)<<endl;
}

int main()
{
	print();
}
