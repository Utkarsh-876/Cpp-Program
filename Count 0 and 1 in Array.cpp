#include<iostream>
using namespace std;

int main()
{
	int Arr[]={0,1,1,0,1,0,0,0,1,1,1,0,1,1,0};
	int size=15;
	int numZero=0;
	int numOne=0;
	
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==0)
		numZero++;
		
		if(Arr[i]==1)
		numOne++;
	}
	
	cout<<"Number os Zeros: "<<numZero<<endl;
	cout<<"Number of One: "<<numOne;
	return 0;
}
