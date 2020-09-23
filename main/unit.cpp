#include "unit.h"

Unit::Unit(double value, UnitType unitType){
    this->conversionValue = value;
    this->unitType = unitType;
}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);

const Unit Unit::YARD(36.0, LENGTH);

const Unit Unit::CENTIMETER(1.0 / 2.5, LENGTH);

const Unit Unit::GALLON(3.78, VOLUME);

const Unit Unit::LITRE(1, VOLUME);

const Unit Unit::ML(0.001, VOLUME);

const Unit Unit::KG(1, WEIGHT);

const Unit Unit::GRAM(0.001, WEIGHT);

const Unit Unit::TONNE(1000, WEIGHT);
