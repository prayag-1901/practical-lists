#include<iostream>
using namespace std;
int fib(int );
int main()
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	int n,i;
	
	cout<<"Enter the number : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<fib(i);
	}
	return 0;
}
int fib(int n)
{
	if(n<=1)
		return n;
		return fib(n-1) + fib(n-2);
}
