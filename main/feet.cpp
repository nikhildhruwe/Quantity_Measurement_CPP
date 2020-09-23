#include "feet.h"

Feet ::Feet(double value, Unit unit){
    this->value = value;
    this->unit = unit;
}

bool Feet ::  operator == (Feet other) const{ // value check & type check
    return (this->value == other.value) && (this->unit == other.unit);
}

bool Feet ::  operator != (Feet *other) const{ // Null check
    return ( this == other);
}

bool Feet::operator == (Feet *other) const { // reference check
    if ( other == nullptr)
        return false;
    return (this == other);
}
