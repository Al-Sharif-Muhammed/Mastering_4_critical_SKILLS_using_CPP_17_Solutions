//
// Created by Al-Sh on 5/2/2023
// Problem #4: Josephus problem

#include <iostream>

using namespace std;

int main() {
    int n, k, rem, inx{ 1 };
    bool out[200]{ };
    cin >> n >> k;
    rem = n;
    for (int i = 0; i < n; ++i) {
        int steps{ (k % rem == 0 ? rem : k % rem) };
        do {
            if (inx > n) {
                inx %= n;
            }
            if (!out[inx]) {
                steps--;
            }
        } while (steps && inx++);

        out[inx] = true;
        rem--;
        cout << inx << " ";
    }
    return 0;
}