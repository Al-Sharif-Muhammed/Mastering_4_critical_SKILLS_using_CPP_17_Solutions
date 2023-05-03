//
// Created by Al-Sh on 5/2/2023
// Problem #5: Unique Numbers of unordered list

#include <iostream>

using namespace std;

int main() {
    const int SIZE{ 900 }, RANGE{ 500 + 1 };
    int arr[SIZE], n;
    cin >> n;
    bool printed[RANGE] { };
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i) {
        if (!printed[arr[i]]) {
            if (i) cout << " ";
            cout << arr[i];
            printed[arr[i]] = true;
        }
    }

    return 0;
}