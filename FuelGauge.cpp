//
// Created by Giles Pierre Carlos on 2019-03-12.
//

#include "FuelGauge.h"
#include <iostream>

using namespace std;

FuelGauge::FuelGauge()
{
    setFuel(0);
}

FuelGauge::FuelGauge(int fuel) {
    setFuel(fuel);
}

void FuelGauge::setFuel(int fuel) {
    if (fuel <= 15)
        gallons = fuel;
    else
        gallons = 15;
}

int FuelGauge::getFuel() const { return gallons; }

void FuelGauge::addFuel() {
    if (gallons > 0 && gallons < 15)
        gallons++;
    else
        cout <<  "Tank is full" << endl;
}

void FuelGauge::burnFuel() {
    if (gallons == 0)
        cout << "Tank is empty" << endl;
    else
        gallons--;
}

void FuelGauge::print() const {
    cout << "Fuel (in Gallons) :" << getFuel() << endl;

}
