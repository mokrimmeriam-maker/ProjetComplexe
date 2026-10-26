#pragma once

class Complex
{
private:
    double re;
    double img;

public:
    Complex(double, double);
    Complex(const Complex& c);
    Complex operator+(Complex c) const;
    Complex operator+(double a) const;

    Complex operator-(Complex c) const;
    Complex operator-(double a) const;

    Complex operator*(Complex c) const;
    Complex operator*(double d) const;

    Complex operator/(Complex c) const;
    Complex operator/(double d) const;

    bool operator==(Complex c) const;
    bool operator==(double d) const;

    bool operator!=(Complex c) const;
    bool operator!=(double d) const;

    bool operator<(Complex c) const;
    bool operator<(double d) const;

    bool operator>(Complex c) const;
    bool operator>(double d) const;

    double module() const;
    void afficher() const;

    ~Complex();
};

