#include <iostream>

int  multiply(int a, int b)
{
    return a*b;
}
double multiply(double a, double b)
{
    return a*b;
}
int main()
{
    int a = 10, b = 11;
    double c = 1.01, d = 13.07;
    std::cout << "10 x 11 = " << multiply(a, b) << std::endl;
    std::cout << "1.01 x 13.07 = " << multiply(c, d) << std::endl;
    return 0;
}