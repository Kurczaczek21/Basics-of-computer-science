//============================================================================
// Name        : Lab7_7.cpp
// Author      : Michal Grega
// Version     :
// Copyright   : Copyright AGH 2017
// Description : Function definition and declaration
//============================================================================

#include<iostream>
using namespace std;

float f(float);

int main() {
   cout << f(71) << endl;
}


float f(float x){
   return ++x;
}
