#include "length.h"

Length ::Length(double value, Unit unit){
    this->value = value;
    this->unit = unit;
    this->unitType = unit.unitType;
}

bool Length ::operator== (Length other) const{ // value check & type check
    return (this->value == other.value && this->unitType == other.unitType);
}

bool Length::operator== (Length *other) const { // reference check
    if ( other == nullptr)
        return false;
    return (this == other && this->value == other->value);
}