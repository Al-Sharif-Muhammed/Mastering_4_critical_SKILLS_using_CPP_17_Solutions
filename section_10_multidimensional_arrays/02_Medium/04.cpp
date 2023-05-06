//
// Created by Al-Sh on 5/4/2023
// Problem #4: Flatten 3D Array

#include <iostream>

using namespace std;

int main() {
    int depth, rows, cols, op;
    cin >> depth >> rows >> cols >> op;
    if (int d, r, c; op == 1) {
        cin >> d >> r >> c;
        cout << d * rows * cols + r * cols + c;
    } else if (int idx; op == 2) {
        cin >> idx;
        cout << idx / (rows * cols);
        idx %= (rows * cols);
        cout << " " << idx / cols;
        idx %= cols;
        cout << " " << idx;
    }
    // if 6 dimensions
    int dim[6];
    for (int i = 0; i < 6; ++i) {
        cin >> dim[i];
    }
    cin >> op;
    if (op == 1) {
        int coordinates[6], idx{ 0 };
        for (int i = 0; i < 6; ++i) {
            cin >> coordinates[i];
        }
        for (int i = 0; i < 6; ++i) {
            int term{coordinates[i]};
            for (int j = i + 1; j < 6; ++j) {
                term *= dim[j];
            }
            idx += term;
        }
        cout << idx;
    } else if (op == 2) {
        int idx; cin >> idx;
        for (int i = 0; i < 6; ++i) {
            int term{1};
            for (int j = i + 1; j < 6; ++j) {
                term *= dim[j];
            }
            cout << idx / term;
            idx %= term;
        }
    }
    return 0;
}