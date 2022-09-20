#ifndef CONDIMENT_DECORATOR_H
#define CONDIMENT_DECORATOR_H

#include <string>
#include <memory>

#include "Beverage/beverage.h"

class CondimentDecorator : public Beverage{
    protected:
        std::unique_ptr<Beverage> beverage;
    public:
        CondimentDecorator();
        std::string getDescription() override;
        double cost() override;

        virtual ~CondimentDecorator() = default;
};

#endif
