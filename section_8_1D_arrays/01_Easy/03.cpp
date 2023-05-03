//
// Created by Al-Sh on 5/2/2023.
// Problem #3: Unique Numbers of ordered list
// assume n > 0.
#include <iostream>
using namespace std;

int main() {
    int n, previous, current;
    cin >> n >> previous;
    cout << previous;
    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current != previous) {
            cout << " " << current;
            previous = current;
        }
    }
    return 0;
}
