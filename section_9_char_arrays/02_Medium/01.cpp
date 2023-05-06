//
// Created by Al-Sh on 5/3/2023
// Problem #1: Compressing

#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int cn{ 0 };
    for (int i = 0; i < s.size() - 1; ++i) {
        cn++;
        if (s[i] != s[i + 1]) {
            cout << s[i] << cn << "_";
            cn = 0;
        }
    }
    cout << s.back() << cn + 1;
    return 0;
}