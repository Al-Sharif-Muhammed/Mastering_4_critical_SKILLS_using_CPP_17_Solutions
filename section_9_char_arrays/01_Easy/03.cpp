//
// Created by Al-Sh on 5/3/2023
// Homework 3: Is Substring?

#include <iostream>

using namespace std;

int main() {
    string input, str;
    cin >> input >> str;
    bool isSubstring{false};

    for (int j = 0; !isSubstring && j <= input.size() - str.size(); ++j) {
        if (str[0] == input[j]) {
            isSubstring = true;
            for (int k = 0; k < str.size(); ++k) {
                if (str[k] != input[k + j]) {
                    isSubstring = false;
                }
            }
        }
    }
    cout << (isSubstring ? "YES" : "NO") << endl;

    return 0;
}