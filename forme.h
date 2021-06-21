#ifndef forme
#define forme
#include <iostream>
class Shape
{
public:
    Shape() {}
    virtual double getArea() = 0;

    virtual std::ostream &put(std::ostream &s) const
    {
        s << "Forma Shape: " << std::endl;
        return s;
    }
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

    std::ostream &put(std::ostream &s) const
    {
        s << "Figura: Rettangolo" << std::endl;
        s << "Base: " << base << std::endl;
        s << "Altezza: " << altezza << std::endl;
        s << std::endl;
        return s;
    }
};
class Circle : public Shape
{
    double raggio;

public:
    Circle(double r) : raggio(r) {}
    Circle() : Circle(0.0) {}
    double getRaggio() { return raggio; }
    double getArea() { return raggio * raggio * 3.14; }

    std::ostream &put(std::ostream &s) const
    {
        s << "Figura: Cerchio" << std::endl;
        s << "raggio: " << raggio << std::endl;
        s << std::endl;
        return s;
    }
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

    std::ostream &put(std::ostream &s) const
    {
        s << "Figura: Triangolo" << std::endl;
        s << "Base: " << base << std::endl;
        s << "Altezza: " << altezza << std::endl;
        s << std::endl;
        return s;
    }
};

std::ostream &operator<<(std::ostream &out, const Shape &a)
{
    return a.put(out);
}

#endif