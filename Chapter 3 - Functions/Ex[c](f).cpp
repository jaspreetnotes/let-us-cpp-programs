/*
    Declare a structure called matrix containing a 3 x 3 array of integers.
    Overload the + operator to carry out addition of two matrices.
*/

#include <iostream>
using namespace std;

const int SIZE = 3;

struct Matrix {
    int a[SIZE][SIZE];
};

Matrix operator + (Matrix m1, Matrix m2);

int main()
{
    Matrix A = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
    Matrix B = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}};
    Matrix C = A + B;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << C.a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

Matrix operator + (Matrix m1, Matrix m2) {
    Matrix result;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }
    return result;
}
