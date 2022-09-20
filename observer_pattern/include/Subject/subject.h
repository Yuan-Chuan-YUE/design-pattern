#ifndef SUBJECT_H
#define SUBJECT_H

#include <memory>
#include "Observer/observer.h"

class Subject {
    public:
        Subject() = default;
        virtual void registerOberver(const std::shared_ptr<Observer> ob) = 0;
        virtual void removeObserver(const std::shared_ptr<Observer> ob) = 0;
        virtual void notifyObservers() = 0;
        virtual ~Subject() = default;
};

#endif
