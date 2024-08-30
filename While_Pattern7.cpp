#include<iostream>
using namespace std;

void print()
{
  int n,i=1;
  cin>>n;
  char start='A';
  while(i<=n)
  {
  	int j=1;
	
	while(j<=n)
	{
		cout<<start<<" ";
		start=start+1;
		j++;
	}
	cout<<endl;
	i++;
  	
  }
}

int main()
{
	print();
}
