//
// Created by Al-Sh on 5/5/2023
// Homework 2: Reverse a string

#include <iostream>

using namespace std;
string reverse(const string& str) {
    string reversed;
    for (int i = 0; i < str.size(); ++i) {
        reversed += str[str.size() - i - 1];
    }
    return reversed;
}
int main() {
    string s;
    cin >> s;
    cout << reverse(s);
    return 0;
}