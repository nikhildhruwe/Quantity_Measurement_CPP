#pragma once
#include <iostream>
using namespace std;

enum Unit {
    LENGTH
};

class Feet{
    Unit unit;
    double value;
public :
   Feet(double, Unit);
   bool operator == (Feet) const;
   bool operator != (Feet *) const;
   bool operator == (Feet *) const;
};