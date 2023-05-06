//
// Created by Al-Sh on 5/5/2023
// Homework 7: Replace substring
// assume that input size >= pattern size
#include <iostream>
#include <string>
using namespace std;

bool starts_with(const string& input, const string& pattern, int pos) {
    if (pos + pattern.size() > input.size()) {
        return false;
    }
    for (int i = 0; i < pattern.size(); ++i) {
        if (input[pos + i] != pattern[i]) {
            return false;
        }
    }
    return true;
}
string replace_str(const string& input, const string& pattern, const string& to) {
    string ans;
    for (int i = 0; i < input.size(); ++i) {
        if (starts_with(input, pattern, i)) {
            ans += to;
            i += pattern.size() - 1;
        } else {
            ans += input[i];
        }
    }
    return ans;
}
int main() {
    string s1, s2, s3;
    cin >> s1 >> s2;

    getline(cin, s3);
    getline(cin, s3);

    cout << replace_str(s1, s2, s3);

    return 0;
}