//
// Created by Giles Pierre Carlos on 2019-03-12.
//

#pragma once

#ifndef PRACTICE_FUELGAUGE_H
#define PRACTICE_FUELGAUGE_H

#include <iostream>

using namespace std;

class FuelGauge {
private:
    int gallons;

public:
    FuelGauge();
    FuelGauge(int fuel);

    // Mutators
    void setFuel(int fuel);

    // Accessor
    int getFuel() const;

    void addFuel();
    void burnFuel();

    void print() const;
};




#endif //PRACTICE_FUELGAUGE_H
