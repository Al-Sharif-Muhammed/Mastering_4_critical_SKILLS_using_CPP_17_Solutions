//
// Created by Al-Sh on 5/3/2023
// Homework 1: Is Prefix?

#include <iostream>

using namespace std;

int main() {
    string input, str;
    cin >> input >> str;
    bool prefix{ true };
    for (int i = 0; i < str.size(); ++i) {
        if (input[i] != str[i]) {
            prefix = false;
        }
    }
    cout << (prefix ? "YES" : "NO");

    return 0;
}