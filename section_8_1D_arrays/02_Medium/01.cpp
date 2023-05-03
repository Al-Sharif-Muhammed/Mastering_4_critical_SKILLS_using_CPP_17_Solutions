//
// Created by Al-Sh on 5/2/2023.
// Problem #1: Find the 3 minimum values
#include <iostream>
using namespace std;

int main() {
    int x, n, m0{ INT_MAX }, m1{ INT_MAX }, m2{ INT_MAX };
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        if (m0 > x) {
            m2 = m1;
            m1 = m0;
            m0 = x;
        } else if (m1 > x) {
            m2 = m1;
            m1 = x;
        } else if (m2 > x) {
            m2 = x;
        }
    }
    cout << m0 << " " << m1 << " " << m2;

    return 0;
}
