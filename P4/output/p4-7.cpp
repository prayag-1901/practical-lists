// Demonstrate use Friend function 
#include<iostream>
using namespace std;
class friends{
		int a;
		friend void getdata(friends &f);
	
	public:
		void putdata()
		{
			cout<<"Value of a : "<<a;
		}
};
void getdata(friends &f)
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	cout<<"Enter the value of a : ";
	cin>>f.a;
}
int main()
{
	friends f;
	getdata(f);
	f.putdata();
}