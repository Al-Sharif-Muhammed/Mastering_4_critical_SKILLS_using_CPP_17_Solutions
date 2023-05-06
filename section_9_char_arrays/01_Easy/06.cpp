//
// Created by Al-Sh on 5/3/2023
// Homework 6: Grouping
// given non-empty string.

#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    cout << s[0];
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] != s[i - 1]) {
            cout << " ";
        }
        cout << s[i];
    }
    return 0;
}