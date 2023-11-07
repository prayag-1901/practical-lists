#include<iostream>
using namespace std;

struct student{
    string name;
    int std;
    float percentage; 
}s1;

int main()
{
    cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
    cout<<"Enter your details below :: "<<endl;
    cout<<"Name :: ";
    cin>>s1.name;
    cout<<"Standard :: ";
    cin>>s1.std;
    cout<<"Percentage :: ";
    cin>>s1.percentage;

      cout<<"Name :: "<<s1.name<<endl;
      cout<<"Standard :: "<<s1.std<<endl;
      cout<<"Percentage :: "<<s1.percentage<<"%"<<endl;

      return 0;
}