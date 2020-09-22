#include "feet.h"

Feet ::Feet(double value){
    this->value = value;
}

bool Feet ::  operator == (Feet other) const{
    return (this->value == other.value);
}

bool Feet ::  operator != (Feet *other) const{
    return !( this == other);
}

bool Feet::operator != (Feet other) const {
    return !(*this == other);
}