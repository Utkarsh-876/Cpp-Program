#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n1,n2;
	cout<<"Enter the size"<<endl;
	cin>>n1;
	
	vector<int>arr(n1);
	cout<<"Enter the element in 1st Array"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the size"<<endl;
	cin>>n1;
	
	vector<int>brr(n1);
	cout<<"Enter the element in 1st Array"<<endl;
	for(int i=0;i<brr.size();i++)
	{
		cin>>brr[i];
	}
	
	vector<int>ans;
	
	for(int i=0;i<arr.size();i++)
	{
		int element=arr[i];
		for(int j=0;i<brr.size();j++)
		{
			if(element==brr[j])
			{
				//mark
				brr[j]=-1;
				ans.push_back(element);
			}
		}
	}
	//print
	for(auto value:ans)
	{
		cout<<value<<" ";
	}
	cout<<endl;
}
