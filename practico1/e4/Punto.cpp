#include "Punto.h"

Punto::Punto() : coordX{0.0}, coordY{0.0}{}

Punto::Punto(double x, double y) : coordX{x}, coordY{y}{}

void Punto::setX(double x){coordX = x;}

void Punto::setY(double y){coordY = y;}

double Punto::getX(){return coordX;}

double Punto::getY(){return coordY;}
