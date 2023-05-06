//
// Created by Al-Sh on 5/3/2023
// Homework 4: Is Subsequence?

#include <iostream>

using namespace std;

int main() {
    string input, str;
    cin >> input >> str;
    int found{ 0 };

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] == str[found]) {
            found++;
        }
    }
    cout << (found == str.size() ? "YES" : "NO") << endl;
    return 0;
}