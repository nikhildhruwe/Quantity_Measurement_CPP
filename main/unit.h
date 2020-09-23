#pragma once
#include <iostream>

enum UnitType {
    LENGTH
};

class Unit{
public:
    double conversionValue;
    UnitType unitType;
    Unit() {}

private:
    Unit(double, UnitType);

public:
    static const Unit INCH;
    static const Unit FEET;
};