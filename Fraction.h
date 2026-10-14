//
// Created by misha on 03.09.2026.
//

#ifndef INC_31_03_09_HEADERFILES_POINT_H
#define INC_31_03_09_HEADERFILES_POINT_H

#endif //INC_31_03_09_HEADERFILES_POINT_H

class Fraction {
private:
    int _numerator1, _denominator1;
public:
    Fraction(int numerator1, int denominator1);

    void Print() const;

    Fraction operator+(const Fraction& other)const;

    Fraction operator-(const Fraction& other)const;

    Fraction operator*(const Fraction& other)const;

    Fraction operator/(const Fraction& other)const;
};