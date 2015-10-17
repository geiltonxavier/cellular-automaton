
#include <iostream>
#include <vector>
#include <unistd.h> 

using namespace std;

const int ROWS = 20;
const int COLS = 40;

void initializeGrid(vector<vector<int>> &grid) {
    grid[10][20] = 1;
    grid[10][21] = 1;
    grid[10][22] = 1;
    grid[9][22] = 1;
    grid[8][21] = 1;
}

void displayGrid(const vector<vector<int>> &grid) {
    system("clear"); 
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << (grid[i][j] ? "■" : " ");
        }
        cout << endl;
    }
}

int countLiveNeighbors(const vector<vector<int>> &grid, int x, int y) {
    int liveNeighbors = 0;
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            if (i == 0 && j == 0) continue; 
            int newX = x + i;
            int newY = y + j;
            if (newX >= 0 && newX < ROWS && newY >= 0 && newY < COLS) {
                liveNeighbors += grid[newX][newY];
            }
        }
    }
    return liveNeighbors;
}

void updateGrid(vector<vector<int>> &grid) {
    vector<vector<int>> newGrid = grid;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            int liveNeighbors = countLiveNeighbors(grid, i, j);
            if (grid[i][j] == 1) {
                if (liveNeighbors < 2 || liveNeighbors > 3) {
                    newGrid[i][j] = 0; 
                }
            } else {
                if (liveNeighbors == 3) {
                    newGrid[i][j] = 1; 
                }
            }
        }
    }
    grid = newGrid;
}

int main() {
    vector<vector<int>> grid(ROWS, vector<int>(COLS, 0));
    initializeGrid(grid);

    while (true) {
        displayGrid(grid);
        updateGrid(grid);
        usleep(200000); 
    }

    return 0;
}

// Update 1
