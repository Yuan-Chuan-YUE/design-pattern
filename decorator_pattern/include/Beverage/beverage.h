#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage{
    protected:
        std::string description;
    public:
        Beverage();
        virtual std::string getDescription();
        virtual double cost();

        virtual ~Beverage() = default;
};

#endif
