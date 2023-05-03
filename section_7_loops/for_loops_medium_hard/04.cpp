//
// Created by Al-Sh on 4/30/2023.
// Homework 4: Is Prime?
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    bool isPrime{ true };
    int n; cin >> n;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = false;
        }
    }
    isPrime ? cout << "YES" : cout << "NO";
    return 0;
}