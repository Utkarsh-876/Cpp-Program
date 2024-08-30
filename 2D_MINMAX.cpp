/*#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3],int rows,int cols)
{
    int maxnum=INT_MIN;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(arr[i][j]>maxnum)
			{
				maxnum=arr[i][j];
			}
		}
	}
	return maxnum;
}

int getMin(int arr[][3],int rows,int cols)
{
    int minnum= INT_MAX;
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(arr[i][j]<minnum)
			{
				minnum=arr[i][j];
			}
		}
	}
	return minnum;
}

int main()
{
	const int rows=3;
	const int cols=3;
	int arr[rows][cols];
	
	cout<<"Enter the element in Array"<<endl;
    for(int i=0;i<rows;i++)
    {
    	for(int j=0;j<cols;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	
	int result=getMax(arr, rows, cols);
	cout<<"Maximum number is: "<<result<<endl;
	
	cout<<endl;
	int result1=getMin(arr,rows,cols);
	cout<<"Minmum number is: "<<result1;
}*/


#include<iostream>
#include<limits.h>
using namespace std;

int main()
{
	int Arr[5];
	cout<<"Enter the  number"<<endl;
	for(int i=0;i<Arr.length;i++)
	{
		cin>>Arr[i];
	}
	
}

int MinNum(int Arr[])
{
	int minNum=INT_MAX;
	for(int i=0;i<Arr.length;i++)
	{
		if(Arr[i]<minNum)
		{
			minNum=Arr[i];
		}
	}
	return MinNum;
}
