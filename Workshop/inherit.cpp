#include <iostream>

class Vehicle
{
    public:
    virtual void start() = 0;
};
class Car: public Vehicle
{
    public:
    void start() override
    {
        std::cout <<"Deisel engine starts" << std::endl;
    }
};
class Bike: public Vehicle
{
    public:
    void start() override
    {
        std::cout <<"Petrol engine starts" << std::endl;
    }
};

int main()
{
    Car c1;
    c1.start();
    Bike b1;
    b1.start();
}
