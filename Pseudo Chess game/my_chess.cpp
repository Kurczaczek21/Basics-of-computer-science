#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace ::std;
char plansza[9][9];

int* bishop(int x, int y) {
    int possible_moves[9];
    possible_moves[0] = 9;
    possible_moves[1] = (x + 2) * 10 + y + 1;
    possible_moves[2] = (x + 2) * 10 + y - 1;
    possible_moves[3] = (x - 2) * 10 + y + 1;
    possible_moves[4] = (x - 2) * 10 + y - 1;
    possible_moves[5] = (x - 1) * 10 + y - 2;
    possible_moves[6] = (x + 1) * 10 + y - 2;
    possible_moves[7] = (x - 1) * 10 + y + 2;
    possible_moves[8] = (x + 1) * 10 + y + 2;
   
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
    int* tab = new int[9];

    for (int i = 0; i < 8; i++) {
        if (possible_moves[i + 1] / 10 < 9 && possible_moves[i + 1] / 10 > 0 && possible_moves[i + 1] % 10 > 0 &&
            possible_moves[i + 1] % 10 < 9) {
            moves += 1;
            tab[moves] = possible_moves[i + 1];
        }
    }
    tab[0] = moves + 1;

    return tab;
}

int* tower(int x, int y){

    int possible_moves[15];
    possible_moves[0]=15;

    for(int i=1;i<9;i++){
        
    }
}