#ifndef forme
#define forme
#include <iostream>
class Shape
{
public:
    Shape() {}
    virtual double getArea() = 0;
};
class Rectangle : public Shape
{
    double base;
    double altezza;

public:
    Rectangle(double b, double a) : base(b), altezza(a) {}
    Rectangle() : Rectangle(0.0, 0.0) {}
    double getBase() { return base; }
    double getAltezza() { return altezza; }
    double getArea() { return base * altezza; }
};
class Circle : public Shape
{
    double raggio;

public:
    Circle(double r) : raggio(r) {}
    Circle() : Circle(0.0) {}
    double getRaggio() { return raggio; }
    double getArea() { return raggio * raggio * 3.14; }
};
class Triangolo : public Shape
{
    double base;
    double altezza;

public:
    Triangolo(double b, double a) : base(b), altezza(a) {}
    Triangolo() : Triangolo(0.0, 0.0) {}
    double getBase() { return base; }
    double getAltezza() { return altezza; }
    double getArea() { return (base * altezza) / 2; }
};

#endif