#pragma once
#include <iostream>

enum UnitType {
    LENGTH, VOLUME, WEIGHT, TEMPERATURE
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
    static const Unit KG;
    static const Unit GRAM;
    static const Unit TONNE;
    static const Unit FAHRENHEIT;
    static const Unit CELSIUS;
};