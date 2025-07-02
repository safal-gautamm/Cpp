#include <iostream>
using std::cin, std::cout, std::endl, std::string;
class Car
{
    private:
    string model;
    int capacity;
    string color;

    public:
    Car (string mod, int cap, string col): model(mod), capacity(cap), color(col){}

    void start()
    {
        cout << "Engine started "<< endl;
    }
    void details()
    {
        cout << "Model: " << this->model << "\nColor: "<< this->color << "\nCapacity: "<< this->capacity << endl;
    }
    void stop()
    {
        cout << "Engine stopped "<< endl;
    }
};
int main()
{
    Car car1("Land-rover", 880, "Red");
    car1.start();
    car1.details();
    car1.stop();
    return 0;
}