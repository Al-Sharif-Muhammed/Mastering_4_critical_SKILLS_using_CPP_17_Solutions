//
// Created by Al-Sh on 5/3/2023
// Employee Program (v1)

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int MAXIMUM_EMPLOYEES{ 1000 };
    string names[MAXIMUM_EMPLOYEES];
    int ages[MAXIMUM_EMPLOYEES], salaries[MAXIMUM_EMPLOYEES], empNumber{ 0 };
    char genders[MAXIMUM_EMPLOYEES];
    bool deleted[MAXIMUM_EMPLOYEES] {};
    while (true) {
        // Print Menu
        int choice;
        cout << "Enter your choice:\n"
             << "1) Add new employee\n"
             << "2) Print all employees\n"
             << "3) Delete by age\n"
             << "4) Update Salary by name\n";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter name:\n";
            cin >> names[empNumber];
            cout << "Enter age:\n";
            cin >> ages[empNumber];
            cout << "Enter salary:\n";
            cin >> salaries[empNumber];
            cout << "Enter gender (M/F):\n";
            cin >> genders[empNumber];
            empNumber++;
        } else if (choice == 2) {
            cout << "*********************\n";
            for (int i = 0; i < empNumber; ++i) {
                if (deleted[i]) continue;
                cout << names[i] << " " << ages[i] << " " << salaries[i] << " " << genders[i] << "\n";
            }

        } else if (choice == 3) {
            int start, end;
            cout << "Enter start and end age\n";
            cin >> start >> end;
            for (int i = 0; i < empNumber; ++i) {
                if (start <= ages[i] && ages[i] <= end) {
                    deleted[i] = true;
                }
            }
        } else if (choice == 4) {
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

    }
    return 0;
}