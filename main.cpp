#include <iostream>
#include <thread>
#include <chrono>
#include "GameOfLife.hpp"
#include "ConsoleOutput.hpp"

int main(int argc, char* argv[]) {
    // Check if there are enough arguments
    if (argc < 4) {
        std::cout << "Usage: " << argv[0] << " <rows> <columns> <iterations>" << std::endl;
        return 1;
    }

    // Parse the arguments
    int rows, columns, iterations;
    try {
        rows = std::stoi(argv[1]);
        columns = std::stoi(argv[2]);
        iterations = std::stoi(argv[3]);
    } catch (const std::exception& e) {
        std::cout << "Invalid arguments. Please provide valid numbers for rows, columns, and iterations." << std::endl;
        return 1;
    }

    // Create an instance of GameOfLife with the specified number of rows and columns
    GameOfLife game(rows, columns);

    // Register the observer with the game
    std::shared_ptr<IObserver> observer = std::make_shared<ConsoleOutput>();
    game.registerObserver(observer);

    /* THIS PART IS UP TO YOU. CHANGE INITIALIZATION AND RUN AS NEEDED OR USE IT AS IT IS. */
    // Initialize random seed
    srand(time(0));
    // Randomly set the initial state of the cells
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            bool state = rand() % 2; // Randomly generate 0 (false) or 1 (true)
            game.setCellState(i, j, state);
        }
    }

    // Run the game for x iterations
    for (int i = 0; i < iterations; i++) {
        game.update();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    // Unregister the observer from the game
    game.unregisterObservers();

    return 0;
}