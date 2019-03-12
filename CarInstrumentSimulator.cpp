//USEFUL FUNCTION POINTER
#include <iostream>
#include "FuelGauge.h"
#include "Odometer.h"

using namespace std;

int main() {
    // Create a FuelGuage object.
    FuelGauge fuel(1);

    // Create an Odometer object to work with the FuelGauge object.
    Odometer odometer(0, &fuel);

    // Fill the car up with gas.
    for (int i = 0; i < 15; i++)
            fuel.addFuel();

    // Drive the car until it runs out of gas.
    while (fuel.getFuel() > 0) {
        // Drive a mile.
        odometer.incrementMiles();

        // Display the mileage.
        cout << "Mileage: " << odometer.getMileage() << endl;

        // Display the amount of fuel.
        cout << "Fuel level: " << fuel.getFuel() << " gallons\n";
        cout << "------------------------------\n";
        fuel.burnFuel();
    }

    return 0;
}

