#include<iostream>
using namespace std;

int main()
{
	int Arr[]={1,3,5,7,9};
	memset(Arr, 1,sizeof(Arr))
	for(int i=0;i<5;i++)
	{
		cout<<Arr[i]<<endl;
	}
	
}

//============================================

// All element replace by 1

/*int main()
{
	int Arr[]={1,3,5,7,9};
	for(int i=0;i<5;i++)
	{
		Arr[i]=1;
	}
	cout<<"updated Array is "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<Arr[i]<<endl;
	}
}*/
