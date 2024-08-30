#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	int Arr[]={12,2,34,21,43,23,67,54,75,4,86,56,98};
	int size=13;
	int minNum=INT_MAX;
	
	for(int i=0;i<size;i++)
	{
		if(Arr[i]<minNum)
		{
			minNum=Arr[i];
		}
	}
	cout<<"Smallest number in Array are: "<<minNum<<endl;
	
}
