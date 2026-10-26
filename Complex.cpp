
#include "Complex.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

Complex::Complex(double re, double im)
    : re(re), img(im)
{
}

Complex::Complex(const Complex& c)
{
    this->re = c.re;
    this->img = c.img;
}
Complex Complex::operator+(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re + c.re;
    res->img = this->img + c.img;

    Complex resultat = *res;
    delete res;
    return resultat;
}
Complex Complex::operator+(double a) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re + a;
    res->img = this->img;

    Complex resultat = *res;
    delete res;
    return resultat;
}
Complex Complex::operator-(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re - c.re;
    res->img = this->img - c.img;

    Complex resultat = *res;
    delete res;
    return resultat;
}
Complex Complex::operator-(double a) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re - a;
    res->img = this->img;

    Complex resultat = *res;
    delete res;
    return resultat;
}

Complex Complex::operator*(Complex c) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re * c.re - this->img * c.img;
    res->img = this->re * c.img + this->img * c.re;

    Complex resultat = *res;
    delete res;
    return resultat;
}

Complex Complex::operator*(double d) const
{
    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re * d;
    res->img = this->img * d;

    Complex resultat = *res;
    delete res;
    return resultat;
}

Complex Complex::operator/(Complex c) const
{
    double denom = c.re * c.re + c.img * c.img;

    if (denom == 0.0)
        throw invalid_argument("Division par zero");

    Complex* res = new Complex(0.0, 0.0);
    res->re = (this->re * c.re + this->img * c.img) / denom;
    res->img = (this->img * c.re - this->re * c.img) / denom;

    Complex resultat = *res;
    delete res;
    return resultat;
}
Complex Complex::operator/(double d) const
{
    if (d == 0.0)
        throw invalid_argument("Division par zero");

    Complex* res = new Complex(0.0, 0.0);
    res->re = this->re / d;
    res->img = this->img / d;

    Complex resultat = *res;
    delete res;
    return resultat;
}

bool Complex::operator==(Complex c) const
{
    return this->re == c.re && this->img == c.img;
}

bool Complex::operator==(double d) const
{
    return this->re == d && this->img == 0.0;
}
bool Complex::operator!=(Complex c) const
{
    return !(*this == c);
}

bool Complex::operator!=(double d) const
{
    return !(*this == d);
}
bool Complex::operator<(Complex c) const
{
    return this->module() < c.module();
}

bool Complex::operator<(double d) const
{
    return this->module() < abs(d);
}

bool Complex::operator>(Complex c) const
{
    return this->module() > c.module();
}

bool Complex::operator>(double d) const
{
    return this->module() > abs(d);
}
double Complex::module() const
{
    return sqrt(this->re * this->re + this->img * this->img);
}
void Complex::afficher() const
{
    cout << this->re;

    if (this->img >= 0)
        cout << " + i" << this->img << endl;
    else
        cout << " - i" << abs(this->img) << endl;
}
Complex::~Complex()
{
}


