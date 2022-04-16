#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int *wsk1 = &a;
	int *wsk2 = &b;

	cout << "odejmowanie wskaznikami " << *wsk1-*wsk2 << endl;
	cout << "dodawanie wskaznikami " << *wsk1+*wsk2 << endl << endl;

	cout << "odejmowanie hybrydowe " << a-*wsk2 << endl;
	cout << "dodawanie hybrydowe " << a+*wsk2 << endl;
	
}
		
