# Game of Life

This is an implementation of [Conway's Game of Life](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life) in C++.

## Description

The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970. It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves.

This implementation includes a `GameOfLife` class that manages the state of the game, a `Cell` class that represents a single cell in the game, and a `ConsoleOutput` class that observes the game and outputs the state of the game to the console.

## Building

This project uses CMake. To build, use the following commands:

```bash
mkdir build
cd build
cmake ..
make
```

## Usage
To run the game, use the following command, where first argument is number of rows of the grid, second argument is number of columns and third argument is number of iterations:

``` bash
./GameOfLife 10 10 50
```