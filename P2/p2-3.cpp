#include<iostream>
using namespace std;

class myclass
{
	public:
		static void myfunction();
};


void myclass::myfunction()
{
	cout<<"This is my function() defined outside the class."<<endl;
}

int main()
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	myclass::myfunction();
	
	return 0;
}
