#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction f1(1, 2);
    Fraction f2(1, 3);

    Fraction sum = f1 + f2;
    Fraction difference = f1 - f2;

    sum.Print();

    difference.Print();

    Fraction multiply = f1 * f2;
    Fraction divide = f1 / f2;
    multiply.Print();
    divide.Print();
}