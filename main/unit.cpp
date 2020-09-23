#include "unit.h"

Unit::Unit(double value, UnitType unitType){
    this->conversionValue = value;
    this->unitType = unitType;
}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);

const Unit Unit::YARD(36.0, LENGTH);