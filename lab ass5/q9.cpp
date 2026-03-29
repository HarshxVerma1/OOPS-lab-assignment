#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    void setVehicle(string mk, string md, int y) {
        make = mk;
        model = md;
        year = y;
    }

    void displayVehicle() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

class Truck : public Vehicle {
protected:
    int load_capacity;

public:
    void setTruck(string mk, string md, int y, int lc) {
        setVehicle(mk, md, y);
        load_capacity = lc;
    }

    void displayTruck() {
        displayVehicle();
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

class RefrigeratedTruck : public Truck {
private:
    float temperature_control;

public:
    void setRefrigeratedTruck(string mk, string md, int y, int lc, float temp) {
        setTruck(mk, md, y, lc);
        temperature_control = temp;
    }

    void displayRefrigeratedTruck() {
        displayTruck();
        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main() {
    RefrigeratedTruck rt;
    rt.setRefrigeratedTruck("Tata", "Ultra", 2022, 15, -5.5);
    rt.displayRefrigeratedTruck();
    return 0;
}