#include <iostream>
using namespace std;
int main()
{
	int *tab=new int[10];
	for(int *i=tab;i<tab+10;i++){
		cout<< *i<<"\t"<< i<<endl;
	}
	cout<<endl;
	float tablica[10];
	float *array=tablica;
	for(float *w=array;w<array+10;w++){
		cout<<*w<<"\t"<<w<<endl;
	}
	delete [] tab;
}
