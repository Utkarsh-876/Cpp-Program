#include<iostream>
using namespace std;

int print(int choice)
{
	int amt=0,plate;
	switch(choice)
	{
		case 1:
			{
				cout<<"------SAMOSA--------"<<endl;
				cout<<"Kitni plate chahhiye aapko"<<endl;
				cin>>plate;
				amt=plate*30;
				cout<<amt<<" Rs ho gaye aapke"<<endl;
				continue;
			}
			
			case 2:
			{
				cout<<"------IDLI--------"<<endl;
				cout<<"Kitni plate chahhiye aapko"<<endl;
				cin>>plate;
				amt=plate*50;
				cout<<amt<<" Rs ho gaye aapke"<<endl;
				break;
			}
			
			case 3:
			{
				cout<<"------VADAPAV--------"<<endl;
				cout<<"Kitni plate chahhiye aapko"<<endl;
				cin>>plate;
				amt=plate*40;
				cout<<amt<<" Rs ho gaye aapke"<<endl;
				break;
			}
			
			default:
				{
					cout<<"Choice to correct choose kr yede"<<endl;
					break;
				}
	}
}

int main()
{
	int choice;
	cout<<"1.SAMOSA \n 2.IDLI\n 3.VADAPAV"<<endl;
	cin>>choice;
	
	print(choice);
	
}
