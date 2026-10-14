#include <iostream>
#include "Fraction.h"
#include "Complex.h"
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

    // ------- task 2 -------

    Complex c1(4, 2);
    Complex c2(1, -1);

    Complex sum2 = c1 + c2;
    Complex difference2 = c1 - c2;
    Complex product2 = c1 * c2;
    Complex quotient2 = c1 / c2;

    cout << "Sum: ";
    sum2.Print();

    cout << "Difference: ";
    difference2.Print();

    cout << "Product: ";
    product2.Print();

    cout << "Quotient: ";
    quotient2.Print();
}