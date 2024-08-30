#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	int Arr[]={1,5,3,8,7,9,11,33,43,54,56,87,6};
	int size=13;
	int maxNum= INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		if(Arr[i]>maxNum)
		{
			maxNum=Arr[i];
		}
	}
     cout<<"Greatest number in Array Are: "<<maxNum; 
}
