#ifndef ZESPOLONE_H // nie pragma once!@#
#define ZESPOLONE_H

#include "Vector.h"
#include <iostream>
class Zespolone 

{

private:
    double real;
    double imag;

public:
    

    Zespolone(); //dmyslny

    
    Zespolone(double r, double i); //argumentowy

    
    void setReal(double r); //set get do R
    double getReal() const;

    //do cz. 
    void setImag(double i);
    double getImag() const;

    //double na zes
    Zespolone(double r);

    // zespol ->doub
    operator double() const;

    
    Zespolone operator+(const Zespolone& other) const;
    Zespolone operator-(const Zespolone& other) const;
    Zespolone operator*(const Zespolone& other) const;
    Zespolone operator/(const Zespolone& other) const;

    //na wect
    static Vector toVector(const Zespolone& c);


};

#endif 