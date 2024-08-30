/*#include<iostream>
using namespace std;

bool findkey(int arr[][3], int row, int col,int key)
{
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==key)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	const int row=3;
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
	int key;
	cout<<"Enter the number uhhh want to sreach"<<endl;
	cin>>key;
	
	cout<<findkey(arr,3,3,key);
}*/


/*#include <iostream>
using namespace std;

bool findkey(int arr[][3], int row, int col, int key) 
{
    for (int i=0;i<row;i++) 
	{
        for (int j=0;j<col;j++) 
		{
            if (arr[i][j] == key)
			{
                return true;
            }
        }
    }
    return false;
}

int main() {
    const int row = 3;
    const int col = 3;
    
    int arr[row][col];//= {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout<<"Enter the element in array"<<endl;
    for(int i=0;i<row;i++)
    {
    	for(int j=0;j<col;j++)
    	{
    		cin>>arr[i][j];
		}
	}
	
    int searchKey;
    cout<<"Enter the number uhh want to search"<<endl;
    cin>>searchKey;

    bool result = findkey(arr, row, col, searchKey);

    if (result) 
	{
        cout <<"Key found!"<< endl;
    } else {
        cout <<"Key not found!"<< endl;
    }
    return 0;
}*/


//**********************************************************************

#include<iostream>
using namespace std;

bool findkey(int row,int col,int arr[][3],int search)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(arr[i][j]==search)
			{
				return true;
			}
		}
	}
	return false;
}


int main()
{
	int row=3;
	int col=3;
	
	int arr[row][col];
	cout<<"Enter the element in array"<<endl;
	
	for(int i=0;i<row;i++)
	{
		for(int j=0;i<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	int search;
	cout<<"Enter the number uhh want to search"<<endl;
	cin>>search;
	
	bool result=findkey(arr,row,col,search);
	
	if(result)
	{
		cout<<"Key found"<<endl;
	}
	else
	{
		cout<<"key not found"<<endl;
	}
}
