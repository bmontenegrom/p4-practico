#include "Punto.h"
#ifndef SEGMENTO_H
#define SEGMENTO_H

class Segmento
{
private:
    Punto inicio;
    Punto fin;
public:
    Segmento();
    Segmento(Punto p1);
    Segmento(Punto p1, Punto p2);
    Segmento(double x1, double y1, double x2, double y2);
    Punto getInicio();
    Punto getFin();
    void setIninicio(Punto p);
    void setFin(Punto p);

    double distancia();
};

#endif
