#include "Punto.h"
#include <iostream>
#include <iomanip>

Punto::Punto() : coordX{0.0}, coordY{0.0}{}

Punto::Punto(double x, double y) : coordX{x}, coordY{y}{}

void Punto::setX(double x){coordX = x;}

void Punto::setY(double y){coordY = y;}

double Punto::getX(){return coordX;}

double Punto::getY(){return coordY;}

std::ostream& operator<<(std::ostream& output, const Punto& p)
{
    std::cout.precision(3);
    std::cout << std::fixed;
    std::cout << "(" << p.coordX << ", " << p.coordY << ")\n";
    return output;
}