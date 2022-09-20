#include <memory>
#include <string>

#include "CondimentDecorator/mocha.h"

Mocha::Mocha(std::unique_ptr<Beverage> beverage){
    this->beverage = std::move(beverage);
}

std::string Mocha::getDescription(){
    return beverage->getDescription() + ", Mocha";
}

double Mocha::cost(){
    return beverage->cost() + 0.2;
}
