#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int Arr[]={1,3,5,7,9};
	int sizea=5;
	int Brr[]={2,4,6,8};
	int sizeb=4;
	
	vector<int> ans;
	
	for(int i=0;i<sizea;i++)
	{
		ans.push_back(Arr[i]);
	}
	
	for(int i=0;i<sizeb;i++)
	{
		ans.push_back(Brr[i]);
	}
	
	cout<<"Resultant Array are: "<<endl;
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<" ";
	}
	
}


