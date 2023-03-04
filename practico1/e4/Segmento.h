#include "Punto.h"

class Segmento
{
private:
    Punto pnt1;
    Punto pnt2;
public:
    Segmento();
    Segmento(Punto p1, Punto p2);
    Segmento(double x1, double y1, double x2, double y2);
    ~Segmento();
    double distancia();
};


