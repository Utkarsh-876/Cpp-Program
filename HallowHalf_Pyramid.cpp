#include<iostream>
using namespace std;

int print(int num)
{
   	int i;
   	while(i<=1)
   	{
   		int j;
   		int count=0;
   		while(j<=i)
   		{
   			cout<<count<<" ";
   			count=count+1;
   			j++;
		   }
		   i++;
	   }
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	print(num);
}
