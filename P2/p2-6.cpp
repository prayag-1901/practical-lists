#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	int number=123;
	char fillchar='*';
	
	cout<<"Default :: "<<setw(10)<<number<<endl;
	cout<<"With setfill :: "<<setfill(fillchar)<<setw(10)<<number<<endl;
	
	return 0;
}
