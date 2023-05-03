//
// Created by Al-Sh on 5/2/2023
// Problem #5: longest subarray

#include <iostream>

using namespace std;

int main() {
    const int SHIFT{ 1000 }, SIZE{ 1000 };
    int n, x, sum{ 0 }, left[ SHIFT + SIZE ]{ }, len{ 0 }, st;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += (x ? 1 : -1);
        if (!left[sum + SHIFT]) {
            left[sum + SHIFT] = i + 1;
        } else {
            int sequence = i - left[sum + SHIFT];
            if (sequence > len) {
                len = sequence;
                st = left[sum + SHIFT];
            }
        }
    }
    cout << "Starts at: " << st << " ends at: " << st + len << endl;
    cout << "With " << len + 1 << " length.\n";
    return 0;
}