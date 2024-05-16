#pragma once
#include <memory>
#include <vector>  
#include "Cell.hpp"
#include "IObserver.hpp"
#include "IPublisher.hpp"

class GameOfLife : public IPublisher {
public:
    GameOfLife(int rows, int cols);
    void registerObserver(std::shared_ptr<IObserver> observer) override;
    void unregisterObservers() override;

    void setCellState(int row, int col, bool alive);
    void update();

private:
    std::vector<std::vector<std::shared_ptr<Cell>>> grid_;
    std::vector<std::shared_ptr<IObserver>> observers_;

    void notifyObservers() override;
};