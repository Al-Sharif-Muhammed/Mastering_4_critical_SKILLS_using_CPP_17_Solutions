//
// Created by Al-Sh on 5/2/2023.
// Problem #2: Replace MinMax
// assume n > 0.
#include <iostream>
using namespace std;

int main() {
    int n, arr[200];
    cin >> n >> arr[0];
    int min{ arr[0] }, max{ arr[0] };
    for (int i = 1; i < n; ++i) {
        cin >> arr[i];
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; ++i) {
        if (arr[i] == min) {
            arr[i] = max;
        } else if (arr[i] == max) {
            arr[i] = min;
        }
    }
    cout << arr[0];
    for (int i = 1; i < n; ++i) {
        cout << " " << arr[i];
    }
    return 0;
}