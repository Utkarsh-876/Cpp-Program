#include<iostream>
using namespace std;
void print()
{
	int size,Arr[size];
	int largest=0;
	cout<<"Enter the size of the Array"<<endl;
	
	cout<<"Enter the Element in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	
	for(int i=0;i<size;i++)
	{
		if(Arr[i]>largest)
		{
			largest=Arr[i];
		}
	}
	cout<<"Largest Element= "<<largest;
}

int main()
{
	print();
}
