#include <iostream>
using namespace std;
int main()
{
	int k=10;
	int *w=&k;

	cout<<*w<<endl;

	k=21;
	cout<<*w<<endl;
}
