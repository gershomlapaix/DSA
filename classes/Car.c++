#include <iostream>
#include <string>

using namespace std;

class Cars
{
private:
    // member variables / data members
    string companyName;
    string model_name;
    string fuel_type;
    float mileage;
    double price;

public:
    Cars()
    {
        cout << "Default constructor called\n";
    }
    Cars(string cname, string mname, string fltype, float m, double p)
    {
        cout << "\nParameterized constructor called\n";
        companyName = cname;
        model_name = mname;
        fuel_type = fltype;
        mileage = m;
        price = p;
    }

    // copy constuctor
    Cars(Cars &obj)
    {
        cout << "\nCopy constructor called\n";
        companyName = obj.companyName;
        model_name = obj.model_name;
        fuel_type = obj.fuel_type;
        mileage = obj.mileage;
        price = obj.price;
    }

    // member functions
    void setData(string cname, string mname, string fltype, float m, double p)
    {
        companyName = cname;
        model_name = mname;
        fuel_type = fltype;
        mileage = m;
        price = p;
    }

    void displayData()
    {
        cout << "\nCar properties\n";
        cout << "\n\t Car company name is " << companyName << endl;
        cout << "\t car company model is " << model_name << endl;
    }

// destructors
    ~Cars()
    {
        cout << "\nDestructor called\n";
    }
};

int main()
{
    Cars car1;
    Cars car2("Toyota", "Altis", "Petrol", 15.5, 1500000);
    car2.displayData();

    // call copy constructor
    Cars car3 = car2;
    car3.displayData();

    return 0;
}