#include "vector.h"
#include <iostream>

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::getX() const { return x; }
double Vector::getY() const { return y; }
