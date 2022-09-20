#ifndef ESPRESSO_H
#define ESPRESSO_H

#include <string>

#include "Beverage/beverage.h"

class Espresso : public Beverage {
    public:
        Espresso();
        double cost() override;
        ~Espresso() = default;
};

#endif
