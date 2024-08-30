/*#include<iostream>
using namespace std;
int main()
{
	string x="10",y="20",z;
	z=x+y;
	cout<<z;
}*/

#include<iostream>
using namespace std;

class sum
{
	private:
	 int a;
	public:
	 int b,c;
	
	void getData()
	{
		cout<<"Enter the value of a and b"<<endl;
		cin>>a>>b;
	}
	void getValue()
	{
		return a;
	}
	void sum();
};

void sum ::sum()
{
	int c=a+b;
	cout<<"Sum is "<<c<<endl;
}

int main()
{
	sum s;
	s.getData();
	cout<<s.getValue();
	
	s.sum();
	return 0;
}


