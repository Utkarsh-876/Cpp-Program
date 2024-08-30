#include<iostream>
#include<vector>
using namespace std;

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
	
	int sum;
	cout<<"Enter the sum uhh want"<<endl;
	cin>>sum;
	
	for(int i=0;i<arr.size();i++)
	{
		int ele1=arr[i];
		
		for(int j=i+1;j<arr.size();j++)
		{
			int ele2=arr[j];
			
			for(int k=j+1;k<arr.size();k++)
			{
				int ele3=arr[k];
				
				for(int m=k+1;m<arr.size();m++)
				{
					int ele4=arr[m];
					
					if(ele1+ele2+ele3+ele4==sum)
					cout<<ele1<<","<<ele2<<","<<ele3<<","<<ele4<<endl;
				}
			}
		}
	}
}
