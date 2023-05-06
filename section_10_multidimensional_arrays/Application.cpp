//
// Created by Al-Sh on 5/4/2023
// NxN tic-tac-toe

#include <iostream>

using namespace std;

int main() {
    const int MAX_DIM{9}, DIAGONALS{2};
    int n, r, c;
    char turn{'o'}, grid[MAX_DIM][MAX_DIM];
    bool winner{false};
    // Taking the dimension from the user.
    do {
        cout << "Enter the dimension of the game: ";
        cin >> n;
    } while (n < 3 || n > 9);

    int rows[MAX_DIM]{}, cols[MAX_DIM]{}, dia[DIAGONALS]{}, moves{0};

    // Erasing the grid.
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            grid[i][j] = '.';
        }
    }

    while(!winner && moves != n * n) {

        // Declare whose turn.
        turn == 'x' ? turn = 'o' : turn = 'x';
        // and taking a valid location.
        cout << "Player " << turn << " turn." << " Enter empty location (r, c): ";
        cin >> r >> c;
        while (r < 1 || r > n || c < 1 || c > n || grid[r - 1][c - 1] != '.') {
            cout << "Invalid input. Try again." << endl << "Enter empty location (r, c): ";
            cin >> r >> c;
        }

        // update the grid.
        grid[r - 1][c - 1] = turn;
        moves++;

        // print grid;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << grid[i][j];
            }
            cout << endl;
        }

        // check if someone won.
        int val{ (turn == 'x' ? 1 : -1) };
        dia[0] += val * (r == c); // on left diagonal
        dia[1] += val * (c == n - r + 1); // on right diagonal
        rows[r - 1] += val;
        cols[c - 1] += val;
        winner = rows[r - 1] == n || rows[r - 1] == -n
                || cols[c - 1] == n || cols[c - 1] == -n
                || dia[0] == n || dia[0] == -n
                || dia[1] == n || dia[1] == -n;
    }
    winner ? (cout << "Player " << turn << " won.") : (cout << "Tie.");


    return 0;
}