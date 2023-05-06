//
// Created by Al-Sh on 5/5/2023
// Homework 4: Is Palindrome Array

#include <iostream>

using namespace std;
bool isPalindrome(const int arr[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    const int MAX_SIZE{100};
    int arr[MAX_SIZE], n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    cout << (isPalindrome(arr, n) ? "YES" : "NO");
    return 0;
}