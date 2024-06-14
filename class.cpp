#include<iostream>
#include "class.h"
#include "vector.h"
#include <stdexcept>

using namespace std;

Zespolone::Zespolone() : real(0), imag(0) {}


Zespolone::Zespolone(double r, double i) : real(r), imag(i) {}  //z arg

//cz rzeczywist (set get)
void Zespolone::setReal(double r) { real = r; }
double Zespolone::getReal() const { return real; }

//urojona
void Zespolone::setImag(double i) { imag = i; }
double Zespolone::getImag() const { return imag; }

// konwert z double
Zespolone::Zespolone(double r) : real(r), imag(0) {}

// Konwersja z zespol na double
Zespolone::operator double() const { return real; }

// Operatory
Zespolone Zespolone::operator+(const Zespolone& other) const {
    return Zespolone(real + other.real, imag + other.imag);
}

Zespolone Zespolone::operator-(const Zespolone& other) const {
    return Zespolone(real - other.real, imag - other.imag);
}

Zespolone Zespolone::operator*(const Zespolone& other) const {
    return Zespolone(real * other.real - imag * other.imag,
        real * other.imag + imag * other.real);
}

Zespolone Zespolone::operator/(const Zespolone& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    if (denominator == 0) {
        throw invalid_argument("nie dzielimy przez 0!!!!");
    }
    return Zespolone((real * other.real + imag * other.imag) / denominator,
        (imag * other.real - real * other.imag) / denominator);
}

// konwet do Vector
Vector Zespolone::toVector(const Zespolone& c) {
    return Vector(c.getReal(), c.getImag());
}
