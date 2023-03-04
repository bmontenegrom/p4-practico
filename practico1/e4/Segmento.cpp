#include "Segmento.h"
#include <cmath>

Segmento::Segmento(){}

Segmento::Segmento(Punto p1) : fin{p1}{}

Segmento::Segmento(double x1, double y1, double x2, double y2) : inicio{Punto{x1, y1}}, fin{Punto{x2,y2}}{}

Segmento::Segmento(Punto p1, Punto p2): inicio{p1}, fin{p2}{}



Punto Segmento::getInicio(){return inicio;}

Punto Segmento::getFin(){return fin;}

void Segmento::setIninicio(Punto p){inicio = p;}

void Segmento::setFin(Punto p){fin = p;}

double Segmento::distancia()
{
    return std::sqrt(std::pow((fin.getX() - inicio.getX()), 2) + std::pow(inicio.getY() - fin.getY(), 2));
} 