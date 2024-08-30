/*#include<iostream>
using namespace std;

int main()
{
	int a=24;
	if(a>20)
	{
		cout<<"Love"<<endl;
	}
	else if(a==24)
	{
		cout<<"Lovely"<<endl;
	}
	else
	{
		cout<<"Utkarsh"<<endl;
	}
	cout<<a;
}
*/

//int main()
//{
//	int a=2;
//	int b=a+1;
//	
//	if((a=3)==b)
//	{
//		cout<<a;
//	}
//	else
//	{
//		cout<<a+1;
//	}
//}


#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3],int row, int col)
{
	int maxnum=INT_MIN;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]>maxnum)
			{
				maxnum=arr[i][j];
			}
		}
	}
	return getMax;
}

int getMin(arr[row][3],int row, int col)
{
	int minnum=INT_MAX;
	for(int i=0;i<row;i++)
	{
	   for(int j=0;j<col;j++)
	   {
	   	    if(arr[i][j]<minnum)
	   	    {
	   	  	   minnum=arr[i][j];
		    }
	   }
	}
	return getMin;
}

int main()
{
	const int row=3;
	const int col=3;
	int arr[row][col];
	
	cout<<"Enter the arrray element"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	result=getMax(arr,row,col);
	cout<<"Maximum number is "<<result<<endl;
	
	result1=getMin(arr,row,col);
	cout<<"Minimum number is "<<result1;
	
}

