#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "Duck/quack.h"
#include "Duck/fly.h"
#include <string>
#include <memory>

class Duck{

private:
    std::unique_ptr<Quack> quackBehavior;
    std::unique_ptr<Fly> flyBehavior;
    std::string duckName;

public:
    Duck() { std::cout << "Create Duck!\n"; }
    Duck(std::unique_ptr<Quack> q, std::unique_ptr<Fly> f, const std::string name) : 
        quackBehavior(std::move(q)), 
        flyBehavior(std::move(f)), 
        duckName(name)
        { std::cout << name << " create!\n"; }
    virtual ~Duck() { std::cout << "Delete Duck!\n"; }

    void quack();

    void fly();
};

class GreenDuck : public Duck{
public:
    GreenDuck(): Duck(std::unique_ptr<Quack>(new LoudQuack), std::unique_ptr<Fly>(new HighFly), "Green Duck"){}
    ~GreenDuck() { std::cout << "delete green dock!\n"; }
};

#endif
