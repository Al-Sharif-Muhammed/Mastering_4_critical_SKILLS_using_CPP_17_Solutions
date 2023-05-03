//
// Created by Al-Sh on 5/2/2023.
// Problem #1: Is increasing array?
// assume that n > 0.
#include <iostream>
using namespace std;

int main() {
    bool increasing{ true };
    int n, current, previous;
    cin >> n >> previous;
    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current < previous) {
            increasing = false;
        }
    }
    cout << (increasing ? "YES" : "NO");
    return 0;
}