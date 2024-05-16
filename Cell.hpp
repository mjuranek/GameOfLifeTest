#pragma once

#include <utility>

class Cell {
public:
    Cell(bool alive);
    Cell(const Cell& other);
    bool isAlive() const;
    void setAlive(bool alive);
    Cell(Cell&& other) noexcept;
    Cell& operator=(Cell&& other) noexcept;

private:
    bool alive_;
};