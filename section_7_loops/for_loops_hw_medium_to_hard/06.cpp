//
// Created by Al-Sh on 4/30/2023.
// Homework 6: Digits sum in range
#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    long long sum{ 0 };
    for (int i = 1; i <= n; ++i) {
        int num{ i }, digitSum{ 0 };
        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }
        if (a <= digitSum && digitSum <= b) {
            sum += i;
        }
    }
    cout << sum;
    return 0;
}
