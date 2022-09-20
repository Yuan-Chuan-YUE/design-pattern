#ifndef QUACK_H
#define QUACK_H

#include <iostream>

class Quack{

public:
    virtual void quack() = 0;
    virtual ~Quack() = default;
};

class LoudQuack : public Quack{
public:
    void quack() override { std::cout << "loud quack!\n"; }
};

#endif
