#include <iostream>

class Complex
{
    double real, image;

    public:
        Complex():real(0), image(0){}
        Complex(double real, double image):real(real), image(image){}

        Complex operator +(Complex complex)
        {
            Complex result;
            result.real = real + complex.real;
            result.image = image + complex.image;
            return result;
        }

        Complex operator -(Complex complex)
        {
            Complex result;
            result.real = real - complex.real;
            result.image = image - complex.image;
            return result;
        }

        void display()
        {
            std::cout << real << " + " <<image << "i "<< std::endl;
        }
};

int main()
{
    Complex c1(21, 12);
    Complex c2(12, 21);
    c1.display();
    c2.display();
    Complex c3 = c1 + c2;
    c3.display();
    Complex c4 = c1 - c2;
    c4.display();
}