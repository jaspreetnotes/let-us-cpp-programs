#include <iostream>
using namespace std;

const int ROWS{25};
const int COLS{80};

void cls();
void cls(int, int, int, int);

int main()
{
    cout << "Clearing the entire screen..." << endl;
    cls();
    cout << "Clearing only part of the screen (rows 5-10 and columns 20-40)..." << endl;
    cls(5, 10, 20, 40);
    return 0;
}

void cls() {
    for(int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

void cls(int r1, int r2, int c1, int c2) {
    if (r1 < 1) r1 = 1;
    if (c1 < 1) c1 = 1;
    if (r2 > ROWS) r2 = ROWS;
    if (c2 > COLS) c2 = COLS;

    for (int i = 1; i <= ROWS; i++) {
        for (int j = 1; j <= COLS; j++) {
            if (i >= r1 && i <= r2 && j >= c1 && j <= c2) {
                cout << " ";
            }
            else {
                cout << ".";
            }
        }
        cout << endl;
    }
}
