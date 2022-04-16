//============================================================================
// Name        : Lab6.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on occurence counting
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int digits[] = {2, 4, 5, 3, 2, 5, 6, 3, 5, 7, 9, 2, 1, 2, 3, 4, 5, 6, 4, 3, 2, 6, 3, 4, 4, 1, 3, 7, 9, 5, 9, 2, 3, 1, 2, 3, 4, 5, 6, 2, 1, 2, 3, 4, 5, 3, 2, 7, 7, 7};
  
  int liczba;
  int ilosc=0;
  cin>>liczba;

	int r=sizeof(digits);  

  for(int i=1;i<=r;i++){
	if(liczba==digits[i]){
	  ilosc+=1;
		 }
  }
	cout<<"liczba wystapien liczby "<<liczba<<" to "<<ilosc<<endl;


  return 0;
}
