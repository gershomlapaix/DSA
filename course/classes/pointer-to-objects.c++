#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class ComplexNumber
{
private:
    int real;
    float imaginary;

public:
    ComplexNumber() {}

    ComplexNumber(int r, float i)
    {
        real = r;
        imaginary = i;
    }

    int getRealPart()
    {
        return real;
    }

    float getImaginaryPart()
    {
        return imaginary;
    }

    void displayData()
    {
        cout << "\n\tComplex number is : " << real << "+" << imaginary << "i" << endl;
    }
};

ComplexNumber add2Number(ComplexNumber n1, ComplexNumber n2)
{
    int r;
    float i;
    r = n1.getRealPart() + n2.getRealPart();
    i = n1.getImaginaryPart() + n2.getImaginaryPart();

    ComplexNumber temp(r, i);
    return temp;
}

int main()
{
    ComplexNumber comp1(5, 4), comp2(5, 4), comp3;

    cout << "Addition on comp1 and comp3" << endl;
    comp3 = add2Number(comp1, comp2);
    comp3.displayData();

    cout << "\n\t After using pointers\n\t-------------\n";
    ComplexNumber *ptr;
    ptr = &comp3;

    ptr->displayData();
    cout << (ptr == &comp3) << endl;

    // handling times in c++

    time_t now = time(0);

    tm *ltm = localtime(&now);

    cout << "Current year is " << 1900 + ltm->tm_year << endl;
    cout << "Current month of the year is " << 1 + ltm->tm_mon << endl;
    cout << "Day of the month is " << ltm->tm_mday << endl;
    cout << "Current hour is " << ltm->tm_hour << endl;
    cout << "Current minute is " << ltm->tm_min << endl
         << endl;
}