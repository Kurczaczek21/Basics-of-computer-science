#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace ::std;
char plansza[9][9];

int* konik(int x, int y) {
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

int znajdz(char figura) {
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            if (plansza[i][j] == figura) {
                if (figura == 'K') {
                    return i * 10 + j;
                }
                else if (figura == 'H') {
                    return i * 10 + j;
                }
                else if (figura == 'R') {
                    return i * 10 + j;
                }
                else if (figura == 'P') {
                    return i * 10 + j;
                }
            }
        }
    }


}

void przygotuj_plansze(char* tab) {
    //przygotowuje pusta plansze
    for (int i = 0; i < 81; i++) {
        *(tab + i) = '-';
    }

    //losuje miejsce dla kazdej figury
    srand(time(NULL));
    for (int i = 1; i < 5; i++) {
        int x, y;
        do {
            x = rand() % 8 + 1;
            y = rand() % 8 + 1;
        } while (*(tab + 9 * x + y) != '-');

        switch (i) {
        case 1:
            *(tab + 9 * x + y) = 'K';
            break;
        case 2:
            *(tab + 9 * x + y) = 'H';
            break;
        case 3:
            *(tab + 9 * x + y) = 'R';
            break;
        case 4:
            *(tab + 9 * x + y) = 'P';
            break;
        }

    }
}

void wypisz(char* tab) {
    for (int i = 0; i < 81; i++) {
        cout << *(tab + i) << " ";
        if ((i % 9) == 8) {
            cout << endl;
        }
    }
}

int* wieza(int x, int y) {
    int* ruch = new int[14];

    //ruch[i] = x*10+y;
    int minus_x = x;
    int plus_x = x;
    int minus_y = y;
    int plus_y = y;
    for (int i = 0; i < 7; ++i) {

        if (minus_x > 1) {
            --minus_x;
            ruch[i] = 10 * minus_x + y;
        }
        else if (plus_x < 8) {
            ++plus_x;
            ruch[i] = 10 * plus_x + y;
        }
    }

    for (int i = 7; i < 14; ++i) {
        if (minus_y > 1) {
            --minus_y;
            ruch[i] = 10 * x + minus_y;
        }
        else if (plus_y < 8) {
            ++plus_y;
            ruch[i] = 10 * x + plus_y;
        }


    }

    return ruch;
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

string konwertuj(int x) {
    string wynik = "";
    wynik += char((x - (x % 10)) / 10 + int('A') - 1);
    wynik += char((x % 10) + int('0'));
    return wynik;
}

bool czy_wolne(int wsp_fig) {
    int wsp_y = 9 - (wsp_fig - (wsp_fig / 10) * 10); // to nie dziala najlepiej
    int wsp_x = (wsp_fig / 10);
    if (plansza[wsp_y][wsp_x] == '-') {
        return true;
    }
    else {
        return false;
    }// pposzukaj jeszcze zmiennycgh

}

int* pion(int kolumna, int wiersz) {
    int wspolrzedne;
    int* wsk = &wspolrzedne;
    if (wiersz == 8) {
        *wsk = 10 * kolumna + 1;
        return wsk;
    }
    *wsk = 10 * kolumna + wiersz + 1;
    return wsk;
}

int string_na_int(string wsp_fig) {
    int x = int(wsp_fig[0] - 'A' + 1);
    int y = 9 - int(wsp_fig[1] - '0');
    return 10 * y + x;
}

void przestaw(char figura, string tu_jest) {
    int wsp = string_na_int(tu_jest);
    int y = wsp % 10;
    wsp /= 10;

    plansza[wsp][y] = figura;

}
void kasujPoprzedniRuch(int wsp_x, int wsp_y) {
    int wsp_x1 = wsp_x;
    int wsp_y1 = 9 - wsp_y;
    plansza[wsp_y1][wsp_x1] = '-';
}

int main() {
    srand(time(NULL));
    char figura;
    char* wsk;
    wsk = &(plansza[0][0]);
    przygotuj_plansze(wsk);
    for (int i = 1; i < 10; i++) {
        plansza[i][0] = char(9 - i) + '0';
    }
    for (int i = 1; i < 9; i++) {
        plansza[0][i] = char(i) + 'A' - 1;
    }
    wypisz(wsk);
    cout << "Szachy v1.0" << endl;
    cout << "Nacisnij \"q\" aby zakonczyc" << endl;
    do {
        cout << "podaj figure, ktora chcesz ruszyc: ";
        cin >> figura;
        figura = toupper(figura);
        int wsp_fig = znajdz(figura);
        int wsp_y = 9 - ((wsp_fig - (wsp_fig % 10)) / 10);
        int wsp_x = (wsp_fig % 10);
        if ('K' == figura) {

            int* array = king(wsp_x, wsp_y);
            int size_of_array = array[0];
            cout << "mozliwe ruchy:\n";
            for (int i = 1; i < size_of_array; i++) {
                if (czy_wolne(array[i]))
                    cout << konwertuj(array[i]) << endl;
            }
            delete[] array;
        }
        else if (figura == 'R') {
            int* wsk = wieza(wsp_x, wsp_y);
            cout << endl;
            for (int i = 0; i < 14; ++i) {
                if (czy_wolne(wsk[i]))
                    cout << konwertuj(wsk[i]) << endl;
            }
            delete[] wsk;
        }
        else if (figura == 'H') {
            for (int i = 1; i <= 8; i++) {
                int pozycja = konik(wsp_x, wsp_y, i);
                if (pozycja > 0 && czy_wolne(pozycja))
                    cout << konwertuj(pozycja) << endl;
            }
        }
        else if (figura == 'P') {
            int pozycja = *(pion(wsp_x, wsp_y));
            if (czy_wolne(pozycja)) {

                cout << konwertuj(pozycja) << endl;
            }
            else {
                cout << "brak mozliwosci ruchu\n";
            }
        }
        else if (figura == 'Q')
        {
            exit(0);
        }
        string tu_jest;
        cout << "gdzie chcesz ruszyc figure?" << endl;
        cin >> tu_jest;

        przestaw(figura, tu_jest);
        kasujPoprzedniRuch(wsp_x, wsp_y);
        wypisz(wsk);
    } while (true);

    return 0;
}
