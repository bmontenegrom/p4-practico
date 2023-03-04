#include <iostream>

#ifndef PUNTO_H
#define PUNTO_H

class Punto {
private:
    double coordX;
    double coordY;
public:
    Punto();
    Punto(double x, double y);
    void setX(double x);
    void setY(double y);
    double getX();
    double getY();
    friend std::ostream& operator<<(std::ostream&, const Punto& p);
};

#endif
