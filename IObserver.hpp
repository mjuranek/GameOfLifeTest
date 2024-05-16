#pragma once
#include <vector>
#include <memory>

class Cell;

class IObserver {
public:
    // Method called when the grid changes
    virtual void onGridChange(const std::vector<std::vector<std::shared_ptr<Cell>>>& grid) = 0;
};