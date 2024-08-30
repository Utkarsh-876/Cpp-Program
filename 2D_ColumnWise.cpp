#include<iostream>
using namespace std;

int main()
{
	int arr[3][3];
	
	cout<<"Enter the array element"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"The columeWise Array is "<<endl;
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"Sum of the columnwise array is "<<endl;
	
	for(int i=0;i<3;i++)
	{
		int sum=0;
		for(int j=0;j<3;j++)
		{
			sum=sum+arr[i][j];
			
		}
		cout<<sum;
		cout<<endl;
	}
}

/*#include<iostream>
using namespace std;

int main()
{
	int row;
	cout<<"Enter the row"<<endl;
	cin>>row;
	
	int col;
	cout<<"Enter the column"<<endl;
	cin>>col;
	
	int arr[row][col];
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	cout<<"Print the coulumn wise Array "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[j][i]<<" ";
		}
		cout<<" "<<endl;
	}
	
	cout<<"Print the sum  of columnwise"<<endl;
	for(int i=0;i<row;i++)
	{
		int sum=0;
		for(int j=0;j<col;j++)
		{
			sum=sum+arr[i][j];
		}
		cout<<sum;
		cout<<endl;
	}
	
}*/

