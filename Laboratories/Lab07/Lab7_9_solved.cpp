#include <iostream>
#include <cmath>
using namespace std;

struct pierwiastki{
        float x;
        float xo;
};

float delta(int a, int b, int c){
        return pow(b,2)-(4*a*c);
}

pierwiastki miejsca_zerowe(int a , int  b , float d){

        pierwiastki tak;
        tak.x=(-b-sqrt(d))/2*a;
        tak.xo=(-b+sqrt(d))/2*a;
        return tak;

}

int main()
{
        int a, b, c;
        cin>>a>>b>>c;
        float d=delta(a, b, c);

        pierwiastki temp;
        temp= miejsca_zerowe(a,b,d);
        cout<<temp.x<<"   "<<temp.xo;
}

