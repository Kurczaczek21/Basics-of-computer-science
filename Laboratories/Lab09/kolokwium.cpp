#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class losowanie{
    private:
    
    public:
    int ilosc=0;

    int my_random_number(){
        int rng=rand() %100;
        ilosc+=1;
        return rng;
    }
    
    int my_count(){
        return ilosc;
    }

    void my_reset(){
        ilosc=0;
    }
};

int main()
{
    srand(time(NULL));

    losowanie los1;

    cout<< los1.my_random_number() << endl;
    cout<< los1.my_random_number() << endl;

    cout<<los1.my_count()<<endl;
    los1.my_reset();
    cout<<los1.my_count()<<endl;

    return 0;
}