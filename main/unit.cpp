#include "unit.h"

Unit::Unit(double value, UnitType unitType){
    this->conversionValue = conversionValue;
    this->unitType = unitType;
}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);