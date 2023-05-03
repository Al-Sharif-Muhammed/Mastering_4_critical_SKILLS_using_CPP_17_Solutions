//
// Created by Al-Sh on 5/2/2023
// Problem #3: Find most frequent number

#include <iostream>

using namespace std;

int main() {
    const int N{ 200 }, SHIFT{ 500 }, RANGE{ 271 };
    int n, arr[N], freq[ SHIFT + RANGE ] {}, mostFrequent{ 0 };
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        freq[arr[i] + SHIFT]++;
    }

    for (int i = 1; i < SHIFT + RANGE; ++i) {
        if (freq[i] > freq[mostFrequent]) {
            mostFrequent = i;
        }
    }
    cout << mostFrequent - SHIFT << " repeated " << freq[mostFrequent] << " times.";

    return 0;
}