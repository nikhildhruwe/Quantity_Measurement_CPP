#pragma once
#include <iostream>

enum UnitType {
    LENGTH
};

class Unit{
public:
    double conversionValue;
    UnitType unitType;
    Unit() {};
    Unit(double, UnitType);
    static const Unit INCH;
    static const Unit FEET;
};