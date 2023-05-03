//
// Created by Al-Sh on 4/29/2023.
// Homework 1: Printing X
#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int lSpaces{ 0 }, inSpaces{ n -  2 };

    // upper
    for (int i = 0; i < n / 2; ++i) {

        for (int j = 0; j < lSpaces; ++j) cout << " ";
        cout << "*";
        for (int j = 0; j < inSpaces; ++j) cout << " ";
        cout << "*\n";

        lSpaces++;
        inSpaces -= 2;
    }

    // mid
    for (int i = 0; i < lSpaces; ++i) cout << " ";
    cout << "*\n";

    // lower
    for (int i = 0; i < n / 2; ++i) {
        lSpaces--;
        inSpaces += 2;
        for (int j = 0; j < lSpaces; ++j) cout << " ";
        cout << "*";
        for (int j = 0; j < inSpaces; ++j) cout << " ";
        cout << "*\n";
    }
    return 0;
}