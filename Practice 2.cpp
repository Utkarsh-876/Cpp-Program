/*#include<iostream>
using namespace std;

int RevArray(int size,int Arr[])
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(Arr[start],Arr[end]);
		start++;
		end--;
	}
	return RevArray;
	
}

int main()
{
	int size,Arr[size];
	cout<<"Enter the size of the Array"<<endl;
	cin>>size;
	
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<=size;i++)
	{
		cin>>Arr[i];
	}
	
	cout<<"Answer is "<<RevArray(size,Arr);
}*/

//=====================================================

//to Print unique number in Array

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
	cout<<"Enter the size"<<endl;
	cin>>n;
	vector<int>Arr(n);
	
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<Arr.size();i++)
	{
		cin>>Arr[i];
	}
	
	int UniqueElement=findUnique(Arr);
	cout<<"Unique element is : "<<UniqueElement<<endl;
}*/

//=============================================================

// union of two Array

/*#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int arr[]={1,3,5,7,9};
	int sizea=5;
	int brr[]={2,4,6,8};
	int sizeb=4;
	
	vector<int>ans;
	
	for(int i=0;i<sizea;i++)
	{
		ans.push_back(arr[i]);
	}
	
	for(int i=0;i<sizeb;i++)
	{
		ans.push_back(brr[i]);
	}
	
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}	
}*/

//===================================================

//Extreme print in Array

/*#include<iostream>
using namespace std;

int main()
{
	int arr[]={10,20,30,40,50,60,70};
	int size=7;
	
	int start=0;
	int end=size-1;
	
	while(start<=end)
	{
		
	if(start==end)
	{
		cout<<arr[start]<<endl;
	}
	else
	{
		cout<<arr[start]<<" ";
		cout<<arr[end]<<" ";
	}
	start++;
	end--;
	
	}
}*/

//=========================================================

//maximum number in Array

/*#include<iostream>
using namespace std;

int main()
{
	int arr[]={12,3,43,54,65,34,23,56,78,89};
	int size=10;
	int maxnum=INT_MIN;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]>maxnum)
		{
			maxnum=arr[i];
		}
	}
	cout<<"greatest number in Array are: "<<maxnum;
}*/

//============================================================

// Smallest number in Array

/*#include<iostream>
using namespace std;

int main()
{
	int arr[]={10,20,30,43,45,67,34,89,7,22,222,456,564};
	int size=13;
	int minnum=INT_MAX;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]<minnum)
		{
			minnum=arr[i];
		}
	}
	cout<<"Smallest number in Array are: "<<minnum<<endl;
}*/

//==============================================================

// counting 0 and 1;

/*#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,0,4,3,1,0,1,0,0,1,2,0,1,0,1,0,1,1,0,0};
	int size=20;
	
	int numzero=0;
	int numone=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		numzero++;
		
		if(arr[i]==1)
		numone++;
	}
	cout<<"zeros are: "<<numzero<<endl;
	cout<<"ones are: "<<numone;
	
}*/

//==========================================================

#include<iostream>
using namespace std;

int main()
{
	int arr[11]={0,1,0,1,1,1,0,0,1,0,0};
	int size=11;
	int numzero=0;
	int numone=0;
	
	for(int i=0;i<size;i++)
	{
		if(arr[i]==0)
		{
			numzero++;
		}
		
		if(arr[i]==1)
		{
			numone++;
		}
	}
	cout<<"Number os zero is "<<numzero<<endl;
	cout<<"Number of one is "<<numone<<endl;
}
