#include<iostream>
using namespace std;

/*int main()
{
	int Arr[]={1,2,3,4,5,6,7,8};
	int size=8;
	int key;
	int flag=0;
	
	cout<<"Enter the number to search"<<endl;
	cin>>key;
	
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==key)
		{
			flag=1;
		}
	}
	
	if(flag)
	{
		cout<<"Present"<<endl;
	}
	else
	{
		cout<<"Absent"<<endl;
	}
	
}*/

bool find( int Arr[],int size,int key)
{
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==key)
		return true;
	}
	return false;
}

int main()
{
	int size;
	int Arr[size];
	
	cout<<"Enter the size"<<endl;
	cin>>size;
	
	cout<<"Enter the Element"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	int key=10;
	
	if(find(Arr , size, key))
	{
		cout<<"Found"<<endl;
	}
	else
	{
		cout<<"Not Found"<<endl;
	}
}
