//
// Created by Al-Sh on 5/4/2023
// Problem #1: How many primes

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int MAX_ROWS{100}, MAX_COLS{100};
    int n, m, arr[MAX_ROWS][MAX_COLS], q, x, y, eX, eY;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
            bool isPrime{true};
            int sqr{static_cast<int>(sqrt(arr[i][j]))};
            if (arr[i][j] < 2) isPrime = false;
            for (int k = 2; k <= sqr; ++k) {
                if (arr[i][j] % k == 0) {
                    isPrime = false;
                    break;
                }
            }
            arr[i][j] = isPrime;
        }
    }
    cin >> q;
    for (int t = 0; t < q; ++t) {
        cin >> x >> y >> eX >> eY;
        int sum{ 0 };
        for (int i = 0; i < eX; ++i) {
            for (int j = 0; j < eY; ++j) {
                sum += arr[i + x][j + y];
            }
        }
        cout << sum << endl;
    }
    return 0;
}