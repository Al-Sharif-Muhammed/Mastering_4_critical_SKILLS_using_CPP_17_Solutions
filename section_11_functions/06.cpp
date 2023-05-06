//
// Created by Al-Sh on 5/5/2023
// Homework 6: Get nth-prime

#include <iostream>
#include <cmath>
using namespace std;
bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
int nth_Prime(int n) {
    int idx{2};
    while (n) {
        if (is_prime(idx++)) {
            n--;
        };
    }
    return (idx - 1);
}
int main() {
    int n;
    cin >> n;
    cout << nth_Prime(n);

    return 0;
}