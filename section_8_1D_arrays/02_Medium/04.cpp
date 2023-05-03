//
// Created by Al-Sh on 5/2/2023
// Problem #4: Digits frequency

#include <iostream>

using namespace std;

int main() {
    int digitFreq[10]{ }, n, num;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (!num) {
            digitFreq[num]++;
        }
        while (num > 0) {
            digitFreq[num % 10]++;
            num /= 10;
        }
    }
    for (int i = 0; i < 10; ++i) {
        cout << i << " " << digitFreq[i]  << endl;
    }
    return 0;
}