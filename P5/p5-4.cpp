#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"This is class A :)"<<endl;
		}
};
class B{
	public:
		B(){
			cout<<"This is class B :)"<<endl;
		}
};
class C : public A,public B{
};
int main()
{
   cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	C obj;
}