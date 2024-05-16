#pragma once
#include <memory>
#include <vector>
#include "Cell.hpp"
#include "IObserver.hpp"

class ConsoleOutput : public IObserver {
public:
    void onGridChange(const std::vector<std::vector<std::shared_ptr<Cell>>>& grid) override;
};