#include<iostream>
using namespace std;

class A
{
	public:
		void display()
		{
			cout<<"Based class"<<endl;
		}
};

class B:public A
{
	public:
		void display()
		{
			cout<<"Derived class"<<endl;
		}
};

int main()
{
	B aa;
	aa.display();
	return 0;
}
