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
     Time addTime(Time t2)
    {
        Time result;
        result.hour = hour + t2.hour;
        result.minute = minute + t2.minute;
        result.second = second + t2.second;
        result.normalize();
        return result;
    }
};

int main()
{
    Time t1(12, 0, 12000);
    t1.display12();

    Time t2(0, 0, 8653999);
    t2.display24();

    Time t3;
    t3 = t1.addTime(t2);
    t3.display12();
    t3.display24();

    return 0;
}