#include<iostream>
using namespace std;

class Shape{
    public:
        float height;
        float base;
    public:
        static void display_shape();
};

void Shape::display_shape()
{
    cout<<"Rectangle";
}

int main()
{
    cout<<"I am Prayag dave "<<endl;
	cout<<"En_no    220130318053 "<<endl;
	cout<<"---------------------"<<endl;
    Shape s1;
    s1.display_shape();

    return 0;
}