//
// Created by Al-Sh on 5/2/2023
// Problem #3: Count increasing sub-arrays
// assume n > 0
#include <iostream>

using namespace std;

int main() {
    int n, curr, prev, longestIncreasing{ 1 }, count{ 0 };
    cin >> n >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> curr;
        if (curr >= prev) {
            longestIncreasing++;
        } else {
            count += longestIncreasing * (longestIncreasing + 1) / 2;
            longestIncreasing = 1;
        }
        prev = curr;
    }
    count += longestIncreasing * (longestIncreasing + 1) / 2;
    cout << count;
    return 0;
}