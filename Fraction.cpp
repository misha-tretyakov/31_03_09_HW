#include <iostream>
#include "Fraction.h"
using namespace std;

Fraction::Fraction(int numerator1, int denominator1) {
    _numerator1 = numerator1;
    _denominator1 = denominator1;
}

Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(
        _numerator1 * other._denominator1 + other._numerator1 * _denominator1,
        _denominator1 * other._denominator1
    );
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(
        _numerator1 * other._denominator1 - other._numerator1 * _denominator1,
        _denominator1 * other._denominator1
    );
}


Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(_numerator1 * other._numerator1, _denominator1 * other._denominator1);
}

Fraction Fraction::operator/(const Fraction& other) const {
    return Fraction(_numerator1 * other._denominator1, _denominator1 * other._numerator1);
}


void Fraction::Print() const {
    cout << _numerator1 << " / " << _denominator1 << endl;
}