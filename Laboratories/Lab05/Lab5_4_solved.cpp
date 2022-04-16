#include <iostream>
using namespace std;
int main()
{
        int tab[10][10];
        for(int i=1;i<=10;i++){
                for(int k=1;k<=10;k++){
			tab[i][k]=i*k;
                        cout<<tab[i][k]<<'\t';

                }
		cout<<endl;
		cout<<endl;
        }
        return 0;
}
