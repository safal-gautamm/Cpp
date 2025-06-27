#include <iostream>
using namespace std;

class Relation
{
    private:
    int data;

    public:

    Relation(int d):data(d){}

    void change()
    {
        data = 99;
        cout << "Data changed to 99" << endl;
    }
    void display() const
    {
        cout << "Data : " << data << endl;
    }
};

int main()
{
    Relation r1(10);
    const Relation r2(101);
    // r2.change();
    r2.display();
    r1.change();
    r1.display();
}