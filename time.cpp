#include <iostream>
using namespace std;

class Time
{
    public:
    int hour, minute, second;

    Time (int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s)
    {
        normalize();
    }
    void normalize()
    {
        minute += second / 60;
        second %= 60;

        hour += minute / 60;
        minute %= 60;

        hour %= 24;
    }
    void display12()
    {
        int hr = hour;
        string stamp = "AM";
        if (hr == 0)
        {
            hr = 12;
        }
        else if(hr == 12)
        {
            stamp = "PM";
        }
        else if(hr > 12)
        {
            hr -= 12;
            stamp = "PM";
        }
        cout << ((hr > 9)? "":"0") << hr << ":" << ((minute > 9)? "":"0") << minute << ":" << ((second > 9)? "":"0") << second << " " << stamp << endl;
    }
    void display24()
    {
        cout << ((hour > 9)? "":"0") << hour << ":" << ((minute > 9)? "":"0") << minute << ":" << ((second > 9)? "":"0") << second << endl;
    }
};

int main()
{
    Time t1(12, 0, 12000);
    t1.display12();
    t1.display24();
}