/*#include<iostream>
using namespace std;

int main()
{
	int Arr[10];
	cout<<Arr<<endl;
	cout<<&Arr<<endl;
}*/

//======================================

/*#include<iostream>
#include<vector>
using namespace std;

int Search(int size,int arr[],int key)
{
	int flag=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			flag=0;
		}
	}
		if(true)
		{
			cout<<"Present"<<endl;
		}
		else
		{
			cout<<"Absent"<<endl;
		}
}

int main()
{
	int size;
	cout<<"Enter the size "<<endl;
	cin>>size;
	
	int arr[size];
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the number uh want to search"<<endl;
	cin>>key;
	Search(size,arr,key);
}*/

//================================================================

/*#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>arr)
{
	int ans=0;
	for(int i=0;i<arr.size();i++)
	{
		ans=ans^arr[i];
	}
	return ans;
}

int main()
{
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	int uniqueElement=findUnique(arr);
	cout<<"Unique element are: "<<uniqueElement<<endl;
}*/

//================================================================

#include<iostream>
#include<vector>
using namespace std;

int search(vector<int>arr, int key)
{
	for(int i=0;i<arr.size();i++)
	{
		int flag=0;
		if(arr[i]==key)
		{
			flag=0;
		}
	}
	if(true)
	{
		cout<<"Present"<<endl;
	}
	else
	{
		cout<<"Absent"<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	
	vector<int>arr(n);
	
	cout<<"Enter the element"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	int key;
	cout<<"Enter the number which uhh want to search"<<endl;
	cin>>key;
}
