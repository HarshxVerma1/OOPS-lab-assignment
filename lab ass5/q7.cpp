#include <iostream>
using namespace std;

class Speedometer {
protected:
    int speed;

public:
    void setSpeed(int s) {
        speed = s;
    }

    void showSpeed() {
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class FuelGauge {
protected:
    int fuel;

public:
    void setFuel(int f) {
        fuel = f;
    }

    void showFuel() {
        cout << "Fuel Level: " << fuel << "%" << endl;
    }
};

class Thermometer {
protected:
    float temperature;

public:
    void setTemperature(float t) {
        temperature = t;
    }

    void showTemperature() {
        cout << "Temperature: " << temperature << " C" << endl;
    }
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    void display() {
        showSpeed();
        showFuel();
        showTemperature();
    }
};

int main() {
    CarDashboard car;

    car.setSpeed(80);
    car.setFuel(65);
    car.setTemperature(36.5);

    car.display();

    return 0;
}