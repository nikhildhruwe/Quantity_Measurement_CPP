#pragma once
#include "unit.h"
#include <iostream>
using namespace std;

class Length{
public :
   UnitType unitType;
   Unit unit;
   double value;
   Length(double, Unit);
   bool operator == (Length) const;
   bool operator == (Length *) const;
};