#pragma once
#include <iostream>

enum UnitType {
    LENGTH, VOLUME
};

class Unit{
public:
    double conversionValue;
    UnitType unitType;
    Unit() {};
    Unit(double, UnitType);
    static const Unit INCH;
    static const Unit FEET;
    static const Unit YARD;
    static const Unit CENTIMETER;
    static const Unit GALLON;
    static const Unit LITRE;
    static const Unit ML;
};