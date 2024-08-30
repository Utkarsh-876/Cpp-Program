#include<iostream>
using namespace std;

int main()
{
	int x,y,z;
	cout<<"Enter the value of X Y Z"<<endl;
	cin>>x>>y>>z;
	
	cout<<"Before swapping: x="<<x<<"\ny="<<y<<"\nz="<<z<<endl;
	
	x=(x+y+z);
	y=x-(y+z);
	z=x-(y+z);
	x=x-(y+z);
	
	cout<<"After swapping: x="<<x<<" \ny="<<y<<"\n z="<<z<<endl;
}
