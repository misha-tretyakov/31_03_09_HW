class Complex {
private:
    double _real;
    double _imaginary;

public:
    Complex(double real = 0, double imaginary = 0);

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;

    void Print() const;
};