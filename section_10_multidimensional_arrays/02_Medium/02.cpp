//
// Created by Al-Sh on 5/4/2023
// Problem #2: Find mountains

#include <iostream>

using namespace std;

int main() {
    const int MAX_ROWS{100}, MAX_COLS{100}, NEIGHBOURS{8};
    int n, m, arr[MAX_ROWS][MAX_COLS],
        di[NEIGHBOURS]{-1, -1, -1, 0, 0, 1, 1, 1},
        dj[NEIGHBOURS]{-1, 0, 1, -1, 1, -1, 0, 1};
    bool notMountain[MAX_ROWS][MAX_COLS]{};

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (notMountain[i][j]) continue;
            for (int d = 0; d < NEIGHBOURS; ++d) {
                int ni{i + di[d]}, nj{j + dj[d]};
                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    if (arr[ni][nj] >= arr[i][j]) {
                        notMountain[i][j] = true;
                    } else {
                        notMountain[ni][nj] = true;
                    }
                }
            }

        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!notMountain[i][j]) {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}