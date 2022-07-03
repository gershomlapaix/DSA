#include <iostream>

using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    void print()
    {
        cout << "(" << real << "+" << imag << ")" << endl;
    }

    //    overload the + operator
    Complex operator+(Complex &c)
    {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    } // end of operator+
};

int main()
{

    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex c3 = c1 + c2;
    c3.print();

    // int x = 5;
    // int y = 6;

    // int z = x + y;
    // cout << z << endl;
    return 0;
}