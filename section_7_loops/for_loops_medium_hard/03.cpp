//
// Created by Al-Sh on 4/30/2023.
// Homework 3: Find all quadruples
#include <iostream>
using namespace std;

int main() {
    // 4 loops
    int cn1{ 0 }, cn2{ 0 };
    for (int a = 1; a <= 200; ++a) {
        for (int b = 1; b <= 200; ++b) {
            for (int c = 1; c <= 200; ++c) {
                for (int d = 1; d <= 200; ++d) {
                    if (a + b == c + d) {
                        cn1++;
                    }
                }
            }
        }
    }

    // 3 loops
    for (int a = 1; a <= 200; ++a) {
        for (int b = 1; b <= 200; ++b) {
            for (int c = 1; c <= 200; ++c) {
                int d = a + b - c;
                cn2 += (1 <= d && d <= 200);
            }
        }
    }
    cout << cn1 << " " << cn2;
    return 0;
}