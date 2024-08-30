#include<iostream>
using namespace std;

int AP(int num)
{
	int AP=((3*num)+7);
	return AP;
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Answer is "<<AP(num);
}
