/*#include<iostream>
using namespace std;

int main()
{
	int arr[3][3]={
	              {1,2,3},
	              {4,5,6},
	              {7,8,9}
				  };
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}*/

//we take input from user

/*#include<iostream>
using namespace std;

int main()
{
	int row =3;
	int col=4;
	int arr[row][col];
	
	
	
	cout<<"Enter the Array element "<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}*/

/*#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int size;
	cout<<"Enter the size"<<endl;
	cin>>size;
	vector<int>arr[size];
	
	cout<<"Enter the element in Array"<<endl;
	
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
     cout<<"Printing the array"<<endl;
     
     for(int i=0;i<size;i++)
     {
     	cout<<arr[i]<<" ";
	 }
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int utkarsh=12;
	int misal=12;
	
	int sum=utkarsh+misal;
	cout<<sum;
}
*/
#include<iostream>
using namespace std;
int main()
{
	int num;
	int fact=1;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<fact;
}

int factorial(int num,int fact)
{
	for(int i=1;i<num;i++)
	{
	fact=fact*num;
    }
    return fact;
}



