#include <iostream>
using namespace std;

int* king(int x, int y) {

    int possible_moves[9];

    possible_moves[0] = 9;
    possible_moves[1] = 10 * (x - 1) + y + 1;
    possible_moves[2] = 10 * x + y + 1;
    possible_moves[3] = 10 * (x + 1) + y + 1;
    possible_moves[4] = 10 * (x - 1) + y;
    possible_moves[5] = 10 * (x + 1) + y;
    possible_moves[6] = 10 * (x - 1) + y - 1;
    possible_moves[7] = 10 * x + y - 1;
    possible_moves[8] = 10 * (x + 1) + y - 1;

    int moves = 0;
    int *tab = new int[9];

    for (int i = 0; i < 8; i++) {
        if (possible_moves[i + 1] / 10 < 9 && possible_moves[i + 1] / 10 > 0 && possible_moves[i + 1] % 10 > 0 &&
            possible_moves[i + 1] % 10 < 9) {
            moves += 1;
            tab[moves]= possible_moves[i + 1];
        }
    }
    tab[0] = moves+1;

    return tab;
}

int main()
{
    cout<<"Podaj pole z ktorego chcesz wykonac ruch: "<<endl;
    int x;
    int y;
    cin>>x>>y;

    int * array = king(x,y);

//w pierwszym elemencie tablicy z mozliwymi ruchami jest zapisana jej dlugosc
//dlatego przy jej wypisywaniu od pierwszego elementu aby uzyskac TYLKO wspolrzedne mozliwych ruchow z danej pozycji

    int size_of_array=array[0];

    for(int i=1;i<size_of_array;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}