#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    void setVehicle(string m, string n, int y) {
        make = m;
        model = n;
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
    void setTruck(string m, string n, int y, int lc) {
        setVehicle(m, n, y);
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
    void setRefrigeratedTruck(string m, string n, int y, int lc, float temp) {
        setTruck(m, n, y, lc);
        temperature_control = temp;
    }

    void displayRefrigeratedTruck() {
        displayTruck();
        cout << "Temperature Control: " << temperature_control << " C" << endl;
    }
};

int main() {
    RefrigeratedTruck rt;
    rt.setRefrigeratedTruck("tata", "abc", 2022, 15, -5.5);
    rt.displayRefrigeratedTruck();
    return 0;
}