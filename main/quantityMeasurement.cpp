#include "quantityMeasurement.h"
#include <iostream>
#include <math.h>

Quantity ::Quantity(double value, Unit unit){
    this->unit = unit;
    this->value = value*(this->unit.conversionValue);
    this->unitType = unit.unitType;
}

bool Quantity ::operator== (Quantity other) const{ // value check & type check
    if (other.unitType == TEMPERATURE){
        other.value = (other.value- 32)*5/9;
        return ((this->value == other.value) && (this->unitType == other.unitType));
    }
    
    return ((this->value == other.value) && (this->unitType == other.unitType));
}

bool Quantity ::operator== (Quantity *other) const { // reference check
    if ( other == nullptr)
        return false;
    return (this == other && this->value == other->value);
}

double Quantity ::addition (Quantity other) const{
    return this->value + other.value;
}