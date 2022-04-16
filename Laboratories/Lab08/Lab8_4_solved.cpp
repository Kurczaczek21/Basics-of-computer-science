#include <iostream>
using namespace std;

//kanal o wszystkim 

class vector2d{
public:
    int x1 , x2;
    void add(vector2d sum){
        x1+=sum.x1;
        x2+=sum.x2;
    }
    void print(){
        cout<<"("<<x1<<","<<x2<<")";
    }
};

int main()
{
    vector2d v1;
    v1.x1=5;
    v1.x2=7;
    
    v1.print();

    vector2d v2;
    v2.x1=10;
    v2.x2=20;

    v1.add(v2);
    v1.print();

    return 0;

}