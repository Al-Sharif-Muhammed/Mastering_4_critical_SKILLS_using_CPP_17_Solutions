//
// Created by Al-Sh on 5/3/2023
// Problem #3: Add 5555

#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int carry{ 0 };
    for (int i = 0; i < s.size(); ++i) {
        int sum{ s[s.size() - i - 1] - '0' + 5 * (i < 4) + carry };
        carry = sum / 10;
        s[s.size() - i - 1] = static_cast<char>(sum % 10 + '0');
    }
    if (carry) cout << carry;
    cout << s;

    return 0;
}