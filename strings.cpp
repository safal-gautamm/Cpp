#include <iostream>
using namespace std;
class Strings
{
public:
    char *chars;

    Strings(string str = "")
    {
        chars = new char[str.length() + 1];
        int i;
        for (i = 0; i < str.length(); i++)
        {
            chars[i] = str[i];
        }
        chars[i] = '\0';
    }
    static Strings join(Strings s1, Strings s2)
    {
        string result;
        string str = s1.chars;
        int len1 = str.length();
        str = s2.chars;
        int len2 = str.length();

        for (int i = 0; i < len1; i++)
        {
            result += s1.chars[i];
        }
        for (int j = 0; j < len2; j++)
        {
            result += s2.chars[j];
        }
        Strings Result(result);
        return Result;
    }
    void display()
    {
        cout << "The string is: " << chars << endl;
    }
    ~Strings(){
        delete[] chars;
    }
};
int main()
{
    Strings s1("Engineers are");
    Strings s2(" Creatures of logic");
    Strings result = Strings::join(s1, s2);
    result.display();
    return 0;
}