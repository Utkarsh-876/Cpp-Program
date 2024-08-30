#include<iostream>
#include<vector>
using namespace std;

int sortColor(vector<int>arr)
{
	int zeros,ones,twos;
	zeros=ones=twos=0;
	
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]==0)
		{
			zeros++;
		}
		else if(arr[i]==1)
		{
			ones++;
		}
		else
		{
			twos++;
		}
	}
	
	
	int i=0;
	while(zeros--)
	{
		arr[i]=0;
		i++;
	}
	
		while(ones--)
	{
		arr[i]=0;
		i++;
	}
	
		while(twos--)
	{
		arr[i]=0;
		i++;
	}
}

int main()
{
	int n;
	cout<<"Enter the size of 'n'"<<endl;
	cin>>n;
	vector<int>arr(n);
	
	cout<<"enter the array"<<endl;
	for(int i=0;i<arr.size();i++)
	{
		cin>>arr[i];
	}
	
	int Sort=sortColor(arr);
	
	cout<<"Sorting color are :"<<Sort<<" ";
}
