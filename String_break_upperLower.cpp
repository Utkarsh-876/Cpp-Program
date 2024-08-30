#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string "<<endl;
	cin>>str;
	
	bool split=false;
	string first_part,second_part;
	
	for(int i=0;i<str.length();i++)
	{
		char c=str[i];
		
		if(isupper(c))
		{
			second_part+=tolower(c);
		}
		else if(islower(c))
		{
			first_part+=toupper(c);
		}
	}
	
	cout<<first_part<<endl;
	cout<<second_part<<endl;
}
