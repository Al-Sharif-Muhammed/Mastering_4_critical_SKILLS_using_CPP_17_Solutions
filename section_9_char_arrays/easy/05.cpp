//
// Created by Al-Sh on 5/3/2023
// Homework 5: Convert to number
// assume valid number is given.

#include <iostream>

using namespace std;

int main() {
    int num{ 0 }, pow{ 1 };
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        int digit{ s[s.size() - i - 1] - '0' };
        num += digit * pow;
        pow *= 10;
    }
    cout << num << " " << num * 3;
    return 0;
}