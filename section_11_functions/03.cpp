//
// Created by Al-Sh on 5/5/2023
// Homework 3: Calculator

#include <iostream>

using namespace std;

int menu() {
    cout << "1 - Add 2 numbers\n"
         << "2 - Subtract 2 numbers\n"
         << "3 - Multiply 2 numbers\n"
         << "4 - Divide 2 numbers\n"
         << "5 - End the program\n";
    cout << "Choose the operation by typing the corresponding number: \n";
    int option; cin >> option;
    return option;
}
void read(double& a, double& b) {
    cout << "Enter the first number: \n";
    cin >> a;
    cout << "Enter the second number: \n";
    cin >> b;
}
void add() {
    double a, b;
    read(a, b);
    cout << a << " + " << b << " = " << a + b << "\n";
}
void subtract() {
    double a, b;
    read(a, b);
    cout << a << " - " << b << " = "  << a - b << "\n";
}
void multiply() {
    double a, b;
    read(a, b);
    cout << a << " * " << b << " = "  << a * b << "\n";
}
void divide() {
    double a, b;
    read(a, b);
    if (b == 0) {
        cout << "Can't Divide by zero\n";
        return;
    }
    cout << a << " / " << b << " = "  << a / b << "\n";
}
void calculator() {
    int n{0}, op{0};
    while (op != 5) {
        op = menu();
        if (op == 1) {
            add();
        } else if (op == 2) {
            subtract();
        } else if (op == 3) {
            multiply();
        } else if (op == 4) {
            divide();
        } else {
            cout << "Error Please chose a valid option\n";
            continue;
        }
        n++;
    }
    cout << "Total number of operations = " << n;
}
int main() {
    calculator();
    return 0;
}