//
// Created by Al-Sh on 5/4/2023
// Problem #3: Transpose

#include <iostream>

using namespace std;

int main() {
    const int MAX_ROWS{100}, MAX_COLS{100};
    int mat[MAX_ROWS][MAX_COLS], tran[MAX_COLS][MAX_ROWS], n, m;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
            tran[j][i] = mat[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << tran[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}