#include<iostream>
using namespace std;

int main()
{
	cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
	float years,rate;
	int principle;
	
	cout<<"Enter the principle amount :: ";
	cin>>principle;
	
	cout<<"Enter the rate of interest :: ";
	cin>>rate;
	
	cout<<"Enter the time period (in years) :: ";
	cin>>years;
	
	cout<<"Simple interest is :: "<<(principle * years * rate) / 100;

	return 0;
}
