#ifndef OBSERVER_H
#define OBSERVER_H

#include <memory>

class Observer : public std::enable_shared_from_this<Observer> {
    public:
        Observer() = default;
        virtual void update(float temp, float humi, float press) = 0;
        virtual ~Observer() = default;
};

#endif
