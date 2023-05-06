//
// Created by Al-Sh on 5/3/2023
// Problem #1: Smaller row?

#include <iostream>

using namespace std;

int main() {
    const int MAX_ROWS{100}, MAX_COLS{100};
    int n, m, q, mat[MAX_ROWS][MAX_COLS], row1, row2;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }
    cin >> q;
    for (int i = 0; i < q; ++i) {
        bool smaller{true};
        cin >> row1 >> row2;
        for (int j = 0; j < m; ++j) {
            if (mat[row1 - 1][j] >= mat[row2 - 1][j]) {
                smaller = false;
                break;
            }
        }
        cout << (smaller ? "YES" : "NO") << endl;
    }

    return 0;
}