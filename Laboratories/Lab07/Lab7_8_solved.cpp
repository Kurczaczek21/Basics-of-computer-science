#include <iostream>
using namespace std;


int clipping(int x){
	int temp;
	if(x<10)
	{	
		temp=10;
	}else if(x>20)
		{
		temp=20;
		}else{
		       	temp=x;
		}
	return temp;
}


int main()
{
	int x;
	cin>>x;
	cout<<clipping(x);
}
