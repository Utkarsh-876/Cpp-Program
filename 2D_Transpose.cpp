#include<iostream>
using namespace std;

int transpose(int arr[][3],int row,int col,int transposeArr[][3])
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			transposeArr[j][i]=arr[i][j];
		}
	}
}

int printArray(int arr[][3],int row , int col)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
    const int  row=3;
	const int col=3;
	int arr[row][col];
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	/*cout<<"Before transpose Array"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}*/
	

	cout<<"Printing Array are"<<endl;
	cout<<printArray(arr,row,col)<<endl;
	cout<<"starting transpose: "<<endl;
	int transposeArr[row][col];
	transpose(arr,row,col,transposeArr);
	cout<<"Printing Array Again"<<endl;
	printArray(transposeArr,row,col);
	
	
}
