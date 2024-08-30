#include<iostream>
using namespace std;
/*

        *
      * *
    * * *
  * * * *
* * * * *

*/
void print()
{
	int n, i=1;
	cin>>n;
	while(i<=n)
	{
		// Space print krlo
		int space=n-i;
		while(space)
		{
			cout<<"  ";
			space=space-1;
		}
	    int j=1;
	    //Star prnt krle
	    while(j<=i)
	    {
	    	cout<<"* ";
	    	j=j+1;
		}
		cout<<endl;
		i=i+1;	
	}
	
}

int main()
{
	print();
}
