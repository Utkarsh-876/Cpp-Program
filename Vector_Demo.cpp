#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//create Vector
	vector<int>Arr;
	
	cout<<Arr.size()<<endl;
	cout<<Arr.capacity()<<endl;
	
	//INSERT
	
	Arr.push_back(5);
	Arr.push_back(6);
	Arr.push_back(7);
	
	//PRINT
	cout<<"Innserting the element"<<endl;
	for(int i=0;i<Arr.size();i++)
	{
		cout<<Arr[i]<<endl;
	}
	
	//REMOVE
	cout<<"Removing the element"<<endl;
     Arr.pop_back();
     for(int i=0;i<Arr.size();i++)
	{
		cout<<Arr[i]<<endl;
	}
}
