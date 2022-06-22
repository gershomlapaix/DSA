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
};

int main()
{
    Cars car1;
    car1.setData("Toyota", "Altis", "Petrol", 15.5, 1500000);
    car1.displayData();
    
    return 0;
}