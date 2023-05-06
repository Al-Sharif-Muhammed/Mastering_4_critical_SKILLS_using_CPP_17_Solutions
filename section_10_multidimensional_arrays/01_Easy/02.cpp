//
// Created by Al-Sh on 5/4/2023
// Problem #2: Triangular matrix

#include <iostream>

using namespace std;

int main() {
    const int MAX_DIMENSION{ 100 };
    int mat[MAX_DIMENSION][MAX_DIMENSION], n, upper{0}, lower{0};
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
            if (j >= i) upper += mat[i][j];
            if (i >= j) lower += mat[i][j];
        }
    }
    cout << lower << endl << upper;

    return 0;
}