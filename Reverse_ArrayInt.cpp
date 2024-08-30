#include<iostream>
using namespace std;

int main()
{
	int size,Arr[size];
	cout<<"Enter the Size of the Array"<<endl;
	cin>>size;
	
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(Arr[start],Arr[end]);
		start++;
		end--;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
	return 0;
}
