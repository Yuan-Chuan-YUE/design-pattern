#include "version.h"
#include <iostream>
#include "Duck/duck.h"

int main(int argc, const char ** argv){

    std::cout << "Major Version: " << StrategyPattern_VERSION_MAJOR << std::endl;

    GreenDuck g;
    g.quack();
    g.fly();
    return 0;
}
