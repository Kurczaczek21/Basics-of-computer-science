#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=100;i++){
		bool p=true;
		if(i%3==0){
			cout<<"Fizz";
			 p=false;
		}
		if(i%5==0){
			cout<<"Buzz";
			p=false;
		}
		if(p){
			cout<<i;
		
		}
	cout<<endl;
	}
}
