//
// Created by Al-Sh on 5/3/2023
// Problem #2: Compare strings

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    // skip until one of them is finished or 2 characters are different.
    while (s1[i] == s2[i] && i < s1.size() && i < s2.size()) {
        i++;
    }
    // first finished or the char of the first have a lower order than the second.
    cout << (i >= s1.size() || s1[i] < s2[i] ? "YES" : "NO") << endl;
    return 0;
}