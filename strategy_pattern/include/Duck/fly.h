#ifndef FLY_H
#define FLY_H

#include <iostream>

class Fly{
public:
    virtual void fly() = 0;
};

class HighFly : public Fly{
public:
    void fly() override { std::cout << "high fly!\n"; }
};

#endif
