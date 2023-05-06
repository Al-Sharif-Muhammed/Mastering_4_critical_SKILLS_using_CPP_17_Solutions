//
// Created by Al-Sh on 5/3/2023
// Employee Program (v1)

#include <iostream>
#include <string>
using namespace std;

const int MAXIMUM_EMPLOYEES{ 1000 };
string names[MAXIMUM_EMPLOYEES];
int ages[MAXIMUM_EMPLOYEES]{}, salaries[MAXIMUM_EMPLOYEES], empNumber{ 0 };
char genders[MAXIMUM_EMPLOYEES];

void printMenu() {
    cout << "Enter your choice:\n"
         << "1) Add new employee\n"
         << "2) Print all employees\n"
         << "3) Delete by age\n"
         << "4) Update Salary by name\n";
}
void insertEmployee() {
    cout << "Enter name:\n";
    cin >> names[empNumber];
    cout << "Enter age:\n";
    cin >> ages[empNumber];
    cout << "Enter salary:\n";
    cin >> salaries[empNumber];
    cout << "Enter gender (M/F):\n";
    cin >> genders[empNumber];
    empNumber++;
}
void showEmployees() {
    cout << "*********************\n";
    for (int i = 0; i < empNumber; ++i) {
        if (!ages[i]) continue;
        cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << "\n";
    }
}
void deleteByRange() {
    int start, end;
    cout << "Enter start and end age\n";
    cin >> start >> end;
    for (int i = 0; i < empNumber; ++i) {
        if (start <= ages[i] && ages[i] <= end) {
            ages[i] = false;
        }
    }
}
void updateSalary() {
    string name;
    int salary;
    cout << "Enter the name and salary\n";
    cin >> name >> salary;
    for (int i = 0; i < empNumber; ++i) {
        if (names[i] == name) {
            salaries[i] = salary;
            break;
        }
    }
}
int main() {

    while (true) {
        printMenu();
        int choice; cin >> choice;

        if (choice == 1) {
            insertEmployee();
        } else if (choice == 2) {
            showEmployees();
        } else if (choice == 3) {
            deleteByRange();
        } else if (choice == 4) {
            updateSalary();
        }

    }

    return 0;
}
