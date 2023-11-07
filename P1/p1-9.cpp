#include<iostream>
using namespace std;

int main()
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	int num;
	
	cout<<"Enter the number :: ";
	cin>>num;
	
	if(num == 0)
	{
		cout<<"The number is zero";
	}
	else if(num % 2 == 0)
	{
		cout<<"The number is even";
	}
	else
	{
		cout<<"The number is odd";
	}
	
	return 0;
}
