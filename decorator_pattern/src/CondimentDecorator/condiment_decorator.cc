#include <memory>

#include "CondimentDecorator/condiment_decorator.h"
#include "Beverage/beverage.h"

CondimentDecorator::CondimentDecorator(){
    beverage = std::unique_ptr<Beverage>(new Beverage);
}

std::string CondimentDecorator::getDescription(){
    return beverage->getDescription() + ", Unknown condiment!";
}

double CondimentDecorator::cost(){
    return beverage->cost();
}
