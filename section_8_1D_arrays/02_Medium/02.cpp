//
// Created by Al-Sh on 5/2/2023
// Problem #2: Search for a number

#include <iostream>

using namespace std;

int main() {
    int n, arr[200], q, target, lastOccurrence[500 + 1];

    for (int i = 0; i < 500; ++i) {
        lastOccurrence[i] = -1;
    }
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        lastOccurrence[arr[i]] = i;
    }

    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> target;
        cout << lastOccurrence[target] << endl;
    }

    return 0;
}