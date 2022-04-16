#include <iostream>
using namespace std;
int main()
{
	int rozmiar;
	cout<<"podaj rozmiar tablcy: "<<endl;
	cin>>rozmiar;
	
	int *tablica = new int [rozmiar];
	
	for(int i=0 ;i<rozmiar;i++){
		int wartosc;
		cout<<"podaj wartosc tablicy dla elementu nr: "<<i+1<<endl;
		cin>>wartosc;
		*(tablica+i)=wartosc;
	}

	for(int i=0;i<rozmiar;i++){
		cout<<i+1<<" element tablicy to: "<<*(tablica+i)<<endl;
	}

	delete [] tablica;

//	diffrent solutionwith array aritmetics
	cout<<endl;


	int size;
        cout<<"podaj rozmiar tablcy: "<<endl;
        cin>>size;


	int *tab = new int [size];

        for(int *wsk=tab;wsk<tab+size;wsk++){
                int wartosc;
		int i=0;
                cout<<"podaj wartosc tablicy dla elementu nr: "<<i+1<<endl;
                cin>>wartosc;
                *wsk=wartosc;
		i++;
        }

        for(int i=0;i<size;i++){
                cout<<i+1<<" element tablicy to: "<<*(tab+i)<<endl;
        }

        delete [] tab;

}
