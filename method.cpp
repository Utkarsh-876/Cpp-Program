#include<iostream>
using namespace std;
 class Fact{
 	public:
 		int num, fact=1;
 		
 		void getData()
 		{
 			cout<<"Enter the number"<<endl;
 			cin>>num;
 			
 			for(int i=1;i<=num;i++)
 			{
 				fact=fact*i;
			 }
			
		 }
		  void fact();
		 
 };
 
 void Fact::fact()
 {
 	cout<<"Factorial is "<<fact<<endl;
 }
 
 int main()
 {
 	fact f;
 	f.getData();
 	f.sum();
 	return 0;
 }
 
