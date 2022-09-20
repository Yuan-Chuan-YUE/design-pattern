#include <memory>
#include <iostream>

#include "Beverage/espresso.h"
#include "CondimentDecorator/mocha.h"

int main(){
    std::unique_ptr<Beverage> be = std::unique_ptr<Espresso>(new Espresso); 
    std::cout << "Your beverage: " << be->getDescription() << std::endl;
    std::cout << "Your cost: " << be->cost() << std::endl;

    std::unique_ptr<Beverage> beWithMocha = std::unique_ptr<Mocha>(new Mocha(std::move(be)));
    std::cout << "Your beverage: " << beWithMocha->getDescription() << std::endl;
    std::cout << "Your cost: " << beWithMocha->cost() << std::endl;

    std::unique_ptr<Beverage> beWithMochaMocha = std::unique_ptr<Mocha>(new Mocha(std::move(beWithMocha)));
    std::cout << "Your beverage: " << beWithMochaMocha->getDescription() << std::endl;
    std::cout << "Your cost: " << beWithMochaMocha->cost() << std::endl;
    
    return 0;
}
