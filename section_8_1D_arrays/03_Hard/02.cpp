//
// Created by Al-Sh on 5/2/2023
// Problem #2: Fixed sliding window

#include <iostream>

using namespace std;

int main() {
    const int SIZE{ 200 };
    int k, n, arr[SIZE];
    cin >> k >> n;

    long long sum{ 0 };
    for (int i = 0; i < k; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }

    long long mx { sum }, mxInx{ 0 };
    for (int i = k; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
        sum -= arr[i - k];
        if (mx < sum) {
            mx = sum;
            mxInx = i;
        }
    }
    cout << mxInx - k + 1 << " " << mxInx << " " << mx;
    return 0;
}