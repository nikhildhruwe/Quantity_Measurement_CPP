#include "length.h"
#include <iostream>

Length ::Length(double value, Unit unit){
    this->unit = unit;
    this->value = value*(this->unit.conversionValue);
    this->unitType = unit.unitType;
}

bool Length ::operator== (Length other) const{ // value check & type check
    return ((this->value == other.value) && (this->unitType == other.unitType));
}

bool Length ::operator== (Length *other) const { // reference check
    if ( other == nullptr)
        return false;
    return (this == other && this->value == other->value);
}