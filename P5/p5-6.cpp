#include<iostream>
using namespace std;
class Animal{
    public:
        void eat(){
            cout<<"Eating food : ) "<<endl;
        }
};
class Cow : public Animal{
    public:
        void eat(){
            cout<<"Cow eat a Grasse : ) ";
        }
};
int main(){
    cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
    Cow c1=Cow();
    c1.eat();

}