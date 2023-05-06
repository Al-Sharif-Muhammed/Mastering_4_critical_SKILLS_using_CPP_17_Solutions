//
// Created by Al-Sh on 5/5/2023
// Homework 5: Set-powers

#include <iostream>

using namespace std;
void set_powers(int arr[], int len = 5 , int m = 2 ) {
    int p{1};
    for (int i = 0; i < len; ++i) {
        arr[i] = p;
        p *= m;
    }
}

int main() {
    const int MAX_SIZE{100};
    int arr[MAX_SIZE], len, m;
    cin >> len >> m;
    set_powers(arr, len, m);
    for (int i = 0; i < len; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}