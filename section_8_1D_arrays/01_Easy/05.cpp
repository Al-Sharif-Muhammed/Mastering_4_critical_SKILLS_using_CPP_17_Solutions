//
// Created by Al-Sh on 5/2/2023.
// Problem #5: Smallest pair
#include <iostream>
using namespace std;

int main() {
    int n, arr[200];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int min{ INT_MAX };
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int term{ arr[i] + arr[j] + j - i };
            if (min > term) {
                min = term;
            }
        }
    }
    cout << min;
    return 0;
}