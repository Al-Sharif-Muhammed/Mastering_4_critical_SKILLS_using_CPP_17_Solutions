//
// Created by Al-Sh on 5/2/2023.
// Problem #4: Is Palindrome?
#include <iostream>
using namespace std;

int main() {
    bool palindrome{ true };
    int n, arr[1000];
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            palindrome = false;
        }
    }
    cout << (palindrome ? "YES" : "NO");
    return 0;
}