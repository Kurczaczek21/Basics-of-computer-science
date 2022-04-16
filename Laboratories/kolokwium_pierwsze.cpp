#include <iostream>
using namespace std;

struct object{
	int m;
	int a;
};

int funkcja(object *w , int size)
{
	int licznik=0;
	int max_force=0;
	for(object *k=w;k<w+size;k++){
		if((k -> m)*(k -> a)>max_force){
			max_force=(k -> m)*(k -> a);
		}
	}
	cout<<max_force<<endl;
	for(object *k=w; k<w+size;k++){
                if((k -> m)*(k -> a)==max_force){
                	(k -> a)=0;
			max_force=(k -> m)*(k -> a); 
			licznik+=1;
			if(licznik==size){
				cout<< "wszytkie elementy sa zerowe"<<endl;
				break;
			}else{
				k=w;
			}		
		}
        }

	


	return max_force;
}

int main()
{
	object test[10];
	object *wsk=test;
//	wsk -> m=5;
//	wsk -> a=10;
//	(wsk+1) -> m=56;
//	(wsk+1) -> a=56;
	cout<< funkcja(wsk , 2)<<endl;	
}
