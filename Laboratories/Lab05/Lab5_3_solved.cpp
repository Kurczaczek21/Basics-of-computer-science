#include <iostream>
using namespace std;
int main()
{
	int suma=0;
	int min=10000;
	int max=-10000;
	int tab[10];
	for(int i=1;i<=10;i++){
		int k;
		cin>>k;
		tab[i]=k;
		suma+=tab[i];
		if(tab[i]<=min){
			min=tab[i];
		}
		if(tab[i]>=max){
			max=tab[i];
		}
		
	}
	float srednia=suma/10;
	cout<<"suma: "<<suma<<endl;
	cout<<"wartos najmniejsza: "<<min<<endl;
	cout<<"wartosc najwieksza: "<<max<<endl;
	cout<<"wartosc srednia: "<<srednia<<endl;
}

