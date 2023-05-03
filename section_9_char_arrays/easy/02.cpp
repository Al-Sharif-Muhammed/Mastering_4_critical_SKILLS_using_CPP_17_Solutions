//
// Created by Al-Sh on 5/3/2023
// Homework 2: Is Suffix?

#include <iostream>

using namespace std;

int main() {
    string input, str;
    cin >> input >> str;
    bool suffix{true};
    for (int i = 0; i < str.size(); ++i) {
        if (str[str.size() - i - 1] != input[input.size() - i - 1]) {
            suffix = false;
        }
    }

    cout << (suffix ? "YES" : "NO");

    return 0;
}