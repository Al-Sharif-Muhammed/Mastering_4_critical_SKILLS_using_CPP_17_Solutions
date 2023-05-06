//
// Created by Al-Sh on 5/5/2023
// Homework 1: Max of 6 numbers

#include <iostream>
#include <algorithm>
using namespace std;

int max(int a, int b, int c) {
    return max(max(a, b), c);
}
int max(int a, int b, int c, int d) {
    return max(max(a, b, c), d);
}

int max(int a, int b, int c, int d, int e) {
    return max(max(a, b, c, d), e);
}

int max(int a, int b, int c, int d, int e, int f) {
    return max(max(a, b, c, d, e), f);
}

int main() {
    cout << max(1, 2, 3, 4, 5, 7);

    return 0;
}