//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int Arr[]={10,20,30,40,50,60,70,80};
//	int size=8;
//	int start=0;
//	int end=size-1;
//	
//	while(start<end)
//	{
//		swap(Arr[start],Arr[end]);
//		start++;
//	    end--;
//	}
//	
//	for(int i=0;i<size;i++)
//	{
//		cout<<Arr[i]<<" ";
//	}
//	
//}

#include<iostream>
using namespace std;

int print(int arr[],int size)
{
	int start=0;
	int end=size-1;
	
	while(start<end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}

int main()
{
	int size;
	int arr[size];
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"Enter the element inArray"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	
	print(arr,size);
	
}
