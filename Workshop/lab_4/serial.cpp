#include <iostream>
using namespace std;

class Serial
{
    private:
    int serial_no;
    static int count;

    public:
    Serial(){
        count ++;
        serial_no = count;
        cout << "Object no. " << serial_no <<" created." << endl;
    }
    void display_serial_no()
    {
        cout << "This object's serial number is " << serial_no << endl;
    }
    static void total_object()
    {
        cout << "Total object created: "<< count << endl;
    }
};

int Serial::count = 0;

int main()
{
    Serial::total_object();

    Serial s1, s2, s3;
    s1.display_serial_no();
    s2.display_serial_no();
    s3.display_serial_no();

    Serial::total_object();
    return 0;
}