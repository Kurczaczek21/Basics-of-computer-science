//============================================================================
// Name        : Lab7.cpp
// Author      : Lucjan Janowski
// Version     : v1.0
// Copyright   : Copyright AGH 2017
// Description : Example on addressing
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int tab[2] = {3, 7};

  cout << &tab[0] << endl; //adres tab[0]
  cout << &tab[1] << endl; //adres tab[1]

  return 0;
}
