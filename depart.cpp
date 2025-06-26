#include <iostream>
using namespace std;

class Depart
{
public:
    int id;
    string name;
    static int count;    

    Depart(int i, string n) : id(i), name(n)
    {
        count++;
        cout << "Constructor called for Object " << count
             << ": ID = " << id << ", Name = " << name << endl;
    }

    ~Depart()
    {
        cout << "Object " << count << " goes out of the scope" << endl;
    }
};

int Depart::count = 0;

int main()
{
    Depart d2(111, "gautam");
    Depart d3(1121, "hello");
    {
        Depart d1(101, "safal");
    }  
    cout << "\nAfter inner block" << endl;
    // d2 destroyed here
    return 0;
}
