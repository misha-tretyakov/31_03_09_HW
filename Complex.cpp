#include <iostream>
#include <stdexcept>
#include "Complex.h"
using namespace std;

Complex::Complex(double real, double imaginary) {
    _real = real;
    _imaginary = imaginary;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(
        _real + other._real,
        _imaginary + other._imaginary
    );
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(
        _real - other._real,
        _imaginary - other._imaginary
    );
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(
        _real * other._real - _imaginary * other._imaginary,
        _real * other._imaginary + _imaginary * other._real
    );
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other._real * other._real +
                         other._imaginary * other._imaginary;

    if (denominator == 0) {
        throw runtime_error("Division by zero");
    }

    return Complex(
        (_real * other._real + _imaginary * other._imaginary) / denominator,
        (_imaginary * other._real - _real * other._imaginary) / denominator
    );
}

void Complex::Print() const {
    if (_imaginary >= 0) {
        cout << _real << " + " << _imaginary << "i" << endl;
    }
    else {
        cout << _real << " - " << -_imaginary << "i" << endl;
    }
}