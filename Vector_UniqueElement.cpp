/*#include<iostream>
#include<vector>
using namespace std;

int findUnique(vector<int>Arr)
{
	int ans=0;
	for(int i=0;i<Arr.size();i++)
	{
		ans=ans^Arr[i];
	}
	return ans;
	
}

int main()
{
	int n;
	cout<<"Enter the size of the Array"<<endl;
	cin>>n;
	vector<int>Arr(n);
	
	cout<<"Enter the Element"<<endl;
	for(int i=0;i<Arr.size();i++)
	{
		cin>>Arr[i];
	}
	
	int UniqueElement=findUnique(Arr);
	
	cout<<"Unique Element is: "<<UniqueElement<<endl;
}*/


#include<iostream>
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
	cout<<"Eter the element in Array"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Unique element are "<<findUnique(arr);
}

