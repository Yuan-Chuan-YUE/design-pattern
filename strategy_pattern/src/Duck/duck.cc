#include "Duck/duck.h"

void Duck::quack(){
    if(quackBehavior){
        quackBehavior->quack();
    }
    else{
        std::cout << "Youe duck can't quack!\n";
    }
}

void Duck::fly(){
    if(flyBehavior){
        flyBehavior->fly();
    }
    else{
        std::cout << "Yourduck can't fly!\n";
    }
}
