#pragma once

#include <vector>
#include <memory>
#include "IObserver.hpp"

class IPublisher {
public:
    virtual ~IPublisher() {}

    virtual void registerObserver(std::shared_ptr<IObserver> observer) = 0;
    virtual void unregisterObservers() = 0;
    virtual void notifyObservers() = 0;
};
