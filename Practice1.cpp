/*#include<iostream>
using namespace std;

int reverse(int num)
{
	int ans=0;
	while(num!=0)
	{
	int digit=num%10;
	if((ans>INT_MAX/10) || (ans<INT_MIN/10))
	{
		return 0;
	}
	ans=((ans*10)+digit);
	num=num/10;	
	}
	return ans;
	
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Answer is "<<reverse(num);
}*/


//=========================================================

//Sum of digit

/*#include<iostream>
using namespace std;

int SumOfDigit(int num)
{
	int sum=0;
	int sub=0;
	int prod=1;
	while(num!=0)
	{
	  int digit=num%10;
	  prod=prod*digit;
	  sum=sum+digit;
	  sub=prod-sum;
	  num=num/10;	
	}
	return sub;
}


int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Answer is "<<SumOfDigit(num);
}
*/

//==============================================================

// Fibonacci

/*#include<iostream>
using namespace std;

int fibonacci(int num)
{
	int a=0,b=1;
	cout<<a<<"\n"<<b<<endl;
	
	for(int i=0;i<num;i++)
	{
		int nextnumber=a+b;
		cout<<nextnumber<<endl;
		
		a=b;
		b=nextnumber;
		
	}
}
int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	cout<<"Answer is "<<fibonacci(num);
}*/

//==========================================================================

//Number is prime or not

/*#include<iostream>
using namespace std;

int isPrime(int num)
{
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"number is not prime"<<endl;
			break;
		}
		else
		{
			cout<<"Number is prime"<<endl;
			break;
		}
	}
}

int main()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	
	isPrime(num);
}*/

//======================================================

//Fibonacci

/*#include<iostream>
using namespace std;

int fibonacci(int num)
{
	int a=0,b=1;
	cout<<a<<"\n"<<b<<endl;
	
	for(int i=1;i<=num;i++)
	{
		int nextnumber=a+b;
		cout<<nextnumber<<endl;
		
		a=b;
		b=nextnumber;
	}
}

int main()
{
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	fibonacci(num);
}*/

//============================================================

/*#include<iostream>
using namespace std;

int RevArray(int size,int Arr[])
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(Arr[start],Arr[end]);
		start++;
		end--;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
}

int main()
{
	int size;
	cout<<"Enter the size of the Array"<<endl;
	cin>>size;
	int Arr[size];
	cout<<"Enter the element in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	RevArray(size,Arr);
}*/


/*#include<iostream>
using namespace std;

int RevArr(int size,int Arr[])
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		swap(Arr[start],Arr[end]);
		start++;
		end--;
	}
	
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<" ";
	}
}

int main()
{
	int size,Arr[size];
	cout<<"Enter the size of the Array"<<endl;
	cin>>size;
	
	cout<<"Enter the Element in Array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>Arr[i];
	}
	
	RevArr(size,Arr);
}*/
//====================================================

//#include<iostream>
//using namespace std;
//
//int palindrome(int num)
//{
//	int digit, rev=0;
//	int n=num;
//	
//	while(num!=0)
//	{
//		digit=num%10;
//		rev=(rev*10)+digit;
//		num=num/10;
//	}
//	if(n==rev)
//	{
//		cout<<"Number is palindrome"<<endl;
//	}
//	else
//	{
//		cout<<"number is not palindrome"<<endl;
//	}
//}
//
//int main()
//{
//	int num;
//	cout<<"Enter the number"<<endl;
//	cin>>num;
//	
//	palindrome(num);
//}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	int count=1;
//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=n)
//		{
//			cout<<count<<" ";
//			count++;
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	int i=1;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=i)
//		{
//			cout<<"* ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}


//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin>>n;
//	
//	int i=0;
//	while(i<=n)
//	{
//		int j=1;
//		while(j<=i)
//		{
//			cout<<i<<" ";
//			j++;
//		}
//		cout<<endl;
//		i++;
//	}
//}


#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int i=1;
	int count=1;
	while(i<=n)
	{
		int j=1;
		while(j<=i)
		{
	      cout<<count<<" ";
	      count++;
	      j++;
		}
		cout<<endl;
		i++;
	}
}

