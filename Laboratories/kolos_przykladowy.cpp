#include <iostream>
using namespace std;

void funkcja(int *tablica , int wyraz_startowy , int range){
	
	*tablica=wyraz_startowy;
	*(tablica+1)=wyraz_startowy;
	for(int i=2;i<range;i++){
		*(tablica+i)=2*(*(tablica+i-1));
	}
}	

int main(){

	int dlugosc;
	cin>>dlugosc;
	int * tab =new int[dlugosc];
	cout<<endl;

	for(int *w=tab;w<tab+dlugosc;w++){
		cout<<*w<<"   ";
	}
	cout<<endl;

	funkcja(tab,1,dlugosc);

	for(int *wsk=tab;wsk<tab+dlugosc;wsk++){
		cout<<*wsk<<"\t";
	}

	cout<<endl;

	for(int i=0;i<dlugosc;i++){
                cout<<*(tab+i)<<"\t";
	
	}
	delete [] tab;
}

