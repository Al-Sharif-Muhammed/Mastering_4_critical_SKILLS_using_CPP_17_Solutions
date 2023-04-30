//
// Created by Al-Sh on 4/30/2023.
// Homework 5: Print Primes
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n; cin >> n;
    if (n >= 2) {
        cout << "2";
    }
    for (int i = 3; i <= n; ++i) {
        bool isPrime{ true };
        for (int j = 2; j <= sqrt(i); ++j) {
            if (i % j == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << "," << i;
        }
    }
    return 0;
}