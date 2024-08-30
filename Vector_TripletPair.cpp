#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size "<<endl;
	cin>>n;
	
	vector<int>arr(n);
	cout<<"Enter the element"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	int sum;
	cout<<"Enter the sum uhh want"<<endl;
	cin>>sum;
	
	for(int i=0;i<arr.size();i++)
	{
		int element1=arr[i];
		
		for(int j=i+1;i<arr.size();j++)
		{
			int element2=arr[j];
			
			for(int k=j+1;k<arr.size();k++)
			{
				int element3=arr[k];
				if(element1+element2+element3==sum)
				cout<<element1<<","<<element2<<","<<element3<<endl;
			}
		}
	}
}
