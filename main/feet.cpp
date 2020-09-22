#include "feet.h"

Feet ::Feet(double value){
    this->value = value;
}

bool Feet ::  operator == (Feet other) const{
    return (this->value == other.value);
}

bool Feet ::  operator != (Feet *other) const{ // Null check
    return !( this == other);
}

bool Feet::operator == (Feet *other) const { // reference check
    if ( other == nullptr)
        return false;
    return (this == other);
}