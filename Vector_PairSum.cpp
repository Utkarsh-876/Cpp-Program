#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size"<<endl;
	cin>>n;
	vector<int>arr(n);
	int sum=80;
	cout<<"Enter the element"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	for(int i=0;i<arr.size();i++)
	{
		int element=arr[i];
		for(int j=i+1;j<arr.size();j++)
		{
			//cout<<"("<<element<<","<<arr[j]<<")"<<endl;
			if(element+arr[j]==sum)
			{
				cout<<"pair of "<<element<<","<<arr[j]<<endl;
			}
		}
	}
}
