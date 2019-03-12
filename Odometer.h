//
// Created by Giles Pierre Carlos on 2019-03-12.
//
#pragma once

#ifndef PRACTICE_ODOMETER_H
#define PRACTICE_ODOMETER_H

#include <iostream>
#include "FuelGauge.h"

class Odometer {
private:
    int mileage;
    int setPoint;

    FuelGauge *fuelGauge;

public:
    Odometer(int m, FuelGauge *fp);

    int getMileage();

    void incrementMiles();

};

#endif //PRACTICE_ODOMETER_H
