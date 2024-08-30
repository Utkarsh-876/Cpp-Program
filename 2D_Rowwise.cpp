/*#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	
	cout<<"Enter the Array element"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Sum of Rowwise is "<<endl;
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
		}
		cout<<sum<<endl;
	}
}*/



#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter the size of row"<<endl;
	cin>>row;
	int col;
	cout<<"Enter the size of column"<<endl;
	cin>>col;
	cout<<"Enter the Element in Array"<<endl;
	int arr[row][col];
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Print the Array"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j];
			cout<<" ";
		}
		cout<<" "<<endl;
	}
	
	cout<<"Print the sum of rowwise"<<endl;
	for(int i=0;i<row;i++)
	{
		int sum=0;
		for(int j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
		cout<<sum<<endl;
	}
}
