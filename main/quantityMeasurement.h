#pragma once
#include "unit.h"
#include <iostream>
using namespace std;

class Quantity{
public :
   UnitType unitType;
   Unit unit;
   double value;
   Quantity(double, Unit);
   bool operator == (Quantity) const;
   bool operator == (Quantity *) const;
   double addition (Quantity) const;
};