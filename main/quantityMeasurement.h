#pragma once
#include "unit.h"
#include <iostream>
using namespace std;

class QuantityMeasurement{
public :
   UnitType unitType;
   Unit unit;
   double value;
   QuantityMeasurement(double, Unit);
   bool operator == (QuantityMeasurement) const;
   bool operator == (QuantityMeasurement *) const;
   double addition (QuantityMeasurement) const;
};