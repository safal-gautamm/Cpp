#include <iostream>

class Park
{
    private:
    int num_vehicle, hour;
    float rate, total;

    public:
    Park(int n, int h, float r): num_vehicle(n), hour(h), rate(r)
    {
        total = 0;
    }
    Park(Park &obj)
    {
        num_vehicle = obj.num_vehicle;
        hour = obj.hour;
        rate = obj.rate;
        total = obj.total;
    }
    void findTotal()
    {
        total = num_vehicle * hour * rate;

        if (num_vehicle > 10)
            total *= 0.9;
    }
    void display()
    {
        std::cout << "No. of vehicles " << num_vehicle << " for " << hour << " hours, at rate of $" << rate <<". Total : $" << total <<std::endl;
    }
};
int main()
{
    Park p1(17, 3, 40);
    p1.findTotal();
    p1.display();

    Park p2(p1);
    p2.findTotal();
    p2.display();

    return 0;
}