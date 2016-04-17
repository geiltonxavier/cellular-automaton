# Cellular Automaton Simulator

This project is a simple implementation of Conway's Game of Life, a classic example of a cellular automaton. The Game of Life is a zero-player game that evolves based on its initial state, requiring no further input. The state of the game is represented by a grid of cells, each of which can be either alive or dead. The grid evolves through iterations according to a set of rules based on the states of neighboring cells.

## Features

- **Dynamic Grid Simulation**: The grid is updated and displayed in real-time, showing the evolution of the cells.
- **Customizable Initial State**: The initial configuration of the grid can be easily modified.
- **Efficient Neighbor Counting**: The algorithm efficiently counts the live neighbors of each cell to determine its next state.

## How It Works

### Rules of the Game

The Game of Life follows four basic rules:

1. **Underpopulation**: Any live cell with fewer than two live neighbors dies, as if by underpopulation.
2. **Survival**: Any live cell with two or three live neighbors lives on to the next generation.
3. **Overpopulation**: Any live cell with more than three live neighbors dies, as if by overpopulation.
4. **Reproduction**: Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

### Grid Representation

The grid is represented as a 2D array where each cell is either `0` (dead) or `1` (alive). The grid evolves over time, and the terminal displays the updated grid in each iteration.

## Installation

To run this project, you'll need a C++ compiler and a Unix-like environment (Linux, macOS, or WSL on Windows).

### Steps to Compile and Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/geiltonxavier/cellular-automaton.git
   cd cellular-automaton

Compile the code:

g++ -o cellular_automaton cellular_automaton.cpp

Run the simulation:

./cellular_automaton


##  Customization

You can customize the initial configuration of the grid by modifying the initializeGrid function in cellular_automaton.cpp. Here’s an example:

void initializeGrid(vector<vector<int>> &grid) {
    // Custom initial pattern
    grid[10][20] = 1;
    grid[10][21] = 1;
    grid[10][22] = 1;
    grid[9][22] = 1;
    grid[8][21] = 1;
}


You can add different patterns, such as gliders, oscillators, or spaceships, to see how they evolve.

### Contributing
Contributions are welcome! Feel free to submit a pull request or open an issue with suggestions and improvements.

### License
This project is licensed under the MIT License. See the LICENSE file for more details.

### Acknowledgments
John Conway: The creator of the Game of Life, which this project is based on.
Wikipedia: For detailed explanations of cellular automata and Conway's Game of Life.
Community: Thanks to everyone who contributes to the open-source community and inspires learning and sharing.