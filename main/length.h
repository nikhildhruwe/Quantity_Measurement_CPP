#pragma once
#include "unit.h"
#include <iostream>
using namespace std;

class Length{
   UnitType unitType;
   double value;
   Unit unit;
public :
   Length(double, Unit);
   bool operator == (Length) const;
   bool operator == (Length *) const;
};