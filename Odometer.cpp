//
// Created by Giles Pierre Carlos on 2019-03-12.
//

#include<iostream>
#include<string>

using namespace std;

#include"Odometer.h"

Odometer::Odometer(int m, FuelGauge *fp) {
    mileage = m;
    setPoint = m;
    fuelGauge = fp;
}

// Accessor for the mileage
int Odometer::getMileage() { return mileage;}

// The incrementMiles function increments
// the value of the mileage member.
void Odometer::incrementMiles() {
    if (mileage < 999999)
        mileage++;
    else
        mileage = 0;

    if (setPoint > mileage) {
        int falseMileage = mileage + 1000000;

        if ( (falseMileage - setPoint) >= 24 ) {
            fuelGauge->burnFuel();
            setPoint = mileage;
        }
    } else {
        if ( (mileage - setPoint) >= 24 ) {
            fuelGauge->burnFuel();
            setPoint = mileage;
        }
    }
}


