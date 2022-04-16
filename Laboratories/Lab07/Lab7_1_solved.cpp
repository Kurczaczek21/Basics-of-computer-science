#include <iostream>
using namespace std;

struct car {
                int displacement;
                int seats;
        };


int main()
{
	car *wsk=new car;
	wsk -> displacement=10;
	wsk -> seats=25;

	cout<<"discplacement= "<< wsk -> displacement<<endl;
	cout<<"seats= "<<wsk -> seats<<endl;

	(*wsk).displacement=20;
	(*wsk).displacement=45;
	cout<<"dis= "<<(*wsk).displacement<<endl;
	cout<<"seats= "<<wsk -> seats<<endl;
	delete wsk;	
}
