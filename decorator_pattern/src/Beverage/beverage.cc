#include <string>

#include "Beverage/beverage.h"

Beverage::Beverage(){
    description = "Unknown berverage!";
}

std::string Beverage::getDescription(){
    return description;
}

double Beverage::cost(){
    return 0.0;
}
