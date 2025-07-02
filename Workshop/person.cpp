#include <iostream>

class Person
{
    std::string name;
    double net_worth;

    public:
    Person(std::string name, double n_w):name(name), net_worth(n_w){std::cout << name << " obj creaed" << std::endl;}

    ~Person()
    {
        std::cout << name << " obj destructed" << std::endl;
    }
};

int main()
{
    Person sagun("sagun", 0);
    {
        Person safal("safal", 1000000);
    }
}