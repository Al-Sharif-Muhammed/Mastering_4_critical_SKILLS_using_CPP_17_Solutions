//
// Created by Al-Sh on 5/2/2023
// Problem #6: Sorting numbers

#include <iostream>

using namespace std;

int main() {

    const int RANGE{ 500 + 1 };
    int n, x, freq[RANGE] { };
    bool first{ true };
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        freq[x]++;
    }
    for (int i = 0; i < RANGE; ++i) {
        for (int j = 0; j < freq[i]; ++j) {
            if (!first) {
                cout << " ";
            }
            cout << i;
            first = false;
        }
    }
    return 0;
}