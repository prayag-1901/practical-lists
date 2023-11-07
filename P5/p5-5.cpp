#include<iostream>
using namespace std;
class Info{
        string name;
        int id;
    public:
        Info(string name,int id){
            this->name=name;
            this->id=id;
        }
        void display(){
            cout<<"Name : "<<name<<endl<<"ID : "<<id;
        }
};
int main(){
    cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
    Info I("shyam panchasara",06);
    I.display();
}