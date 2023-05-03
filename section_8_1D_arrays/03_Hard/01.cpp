//
// Created by Al-Sh on 5/2/2023
// Problem #1: Recamán's sequence

#include <iostream>

using namespace std;

int main() {
    int f = 0, k, lI{ 0 }, lV{ 0 }, freq[1000] { };
    cin >> k;
    for (int i = 0; i < k; ++i) {

        int t1{ lV - lI - 1 }, t2{ lV + lI + 1 }, value;

        value = (t1 > 0 && !freq[t1] ? t1 : t2);

        freq[value] = true;
        lV = value;
        lI++;
    }
    cout << lV;
    return 0;
}