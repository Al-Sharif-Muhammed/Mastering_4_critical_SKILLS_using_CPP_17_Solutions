//
// Created by Al-Sh on 5/4/2023
// Problem #3: Active Robot

#include <iostream>

using namespace std;

int main() {
    int n, m, x{0}, y{0}, k, dir, step;
    cin >> n >> m >> k;
    for (int i = 0; i < k; ++i) {
        cin >> dir >> step;
        if (dir == 1) {
            x = ((x - step) % n + n) % n;
        } else if (dir == 2) {
            y = (y + step) % m;
        } else if (dir == 3) {
            x = (x + step) % n;
        } else if (dir == 4) {
            y = ((y - step) % m + m) % m;
        }
        cout << "(" << x << ", " << y << ")" << endl;
    }
    return 0;
}