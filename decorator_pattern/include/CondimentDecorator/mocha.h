#ifndef MOCHA_H
#define MOCHA_H

#include <memory>
#include <string>

#include "CondimentDecorator/condiment_decorator.h"

class Mocha : public CondimentDecorator {
    public:
        Mocha(std::unique_ptr<Beverage> beverage);
        std::string getDescription() override;
        double cost() override;
};

#endif
